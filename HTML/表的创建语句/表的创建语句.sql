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
insert into cus_order values(1002,2,4,5),(1003,1,3,1);
select * from cus_order;