-- 创建工作表
drop database if exists oa_system;
CREATE DATABASE oa_system CHARSET UTF8;
USE oa_system;
CREATE TABLE dept(dept_id INT PRIMARY KEY , dept_name VARCHAR(20));
INSERT INTO dept VALUES(1,'软件部'),(2,'销售部'),(3,'人事部');
SELECT * FROM dept;
CREATE TABLE emp(id INT PRIMARY KEY,emp_name VARCHAR(20) NOT NULL,job VARCHAR(10),top_id INT,hdate DATE,sal DOUBLE,bonus double,dept_id INT);
INSERT INTO emp VALUES
(1,'张三','软件工程师',3,'2002-03-26',5000,null,1),
(2,'张三三','软件工程师',3,'2005-04-27',7000,700,1),
(3,'李四','软件工程师',7,'2001-07-12',9000,500,1),
(4,'王五','销售',6,'2010-03-15',1400,500,2),
(5,'赵六','销售',6,'2011-05-03',3000,1000,2),
(6,'ABC','销售',7,'2021-06-27',10000,500,2),
(7,'小七','总经理',NULL,'1999-05-20',1000,500,NULL);
select * from emp;
create table job_grade(grade_level char(1),lowest_sal int,highest_sal int);
insert into job_grade values('A',1000,2999),('B',3000,5999),('C',6000,9999),('D',10000,14999),('E',15000,24999);
select * from job_grade;


-- 创建商品表
DROP DATABASE if EXISTS school;
create database school CHARSET utf8;
use school;
create table stu(
stu_id INT primary key, 
stu_name varchar(20),
age tinyint,
birthday date
);
insert into stu values(1,'tom',18,'2004-10-18');
insert into stu values(2,'jack',17,'2005-7-20');
insert into stu values(3,'mary',17,'2005-3-7');
select * from stu;

DROP DATABASE if EXISTS shop;
create database shop CHARSET utf8;
use shop;
create table if not exists products
(
product_id int primary key,
product_name varchar(45) not null,
number int not null,
price double not null 
);
insert into products 
values(1,'vivo手机',50,3999),(2,'袜子',300,4),(3,'手套',20,5);
select * from products;
create table if not exists customer
(
customer_id int primary key,
customer_name varchar(45) not null
);
insert into customer 
values(3,'张三'),(4,'李四'),(5,'王五');
select * from customer;
create table if not exists cus_order(
order_id int primary key,
product_id int ,
customer_id int ,
order_number int 
);
insert into cus_order values(1001,1,3,2);
select * from cus_order;

-- 检索数据
use oa_system;
select id,emp_name,job,sal from emp;
select * from emp;
select distinct job,dept_id from emp;
select id as 员工ID,emp_name 员工姓名,job from emp;
-- where子句
select * from emp where id = 7;

select emp_name 姓名,job 职位,hdate 入职日期 from emp where sal < 3000;

insert into emp(id,emp_name,job,top_id,hdate,sal,bonus,dept_id) values(8,'张飞','销售',7,'2022-11-7',1500,500,2);

select * from emp where not id in (3,5,7);

select * from emp where sal between 3000 and 7000;

select * from emp where not job = '软件工程师';

select * from emp where emp_name like '张%' && sal > 5000; 

select * from emp where emp_name like '张_';

select * from emp where top_id is null;

select id,emp_name,sal + 1000 涨后薪资 from emp where hdate < '2010-1-1';

use shop;
select * from products;
select price * 0.75 from products where product_name = 'vivo手机';
update products set price=price * 0.75 where product_name = 'vivo手机';
select * from products;

-- 字符串函数
substring('ABCDEF',2,4);-- 截取字符串
concat('abcdef','ghijklmn','opqrst');-- 连接字符串
-- 日期函数
curdate();-- 获取当前日期
year();-- 返回年份
-- 数学函数
round(12.0023,4);-- 四舍五入（可能不精确）
-- 聚合函数
avg,sum,min,max,count

-- 数据排序
select * from emp order by sal asc;-- 升序
select * from emp order by sal desc;-- 降序