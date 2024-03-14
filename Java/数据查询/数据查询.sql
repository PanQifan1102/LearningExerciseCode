CREATE DATABASE mydb1 CHARSET utf8;
USE mydb1;
CREATE TABLE dept(dept_id INT PRIMARY KEY , dept_name VARCHAR(20));
INSERT INTO dept VALUES(1,'软件部'),(2,'销售部'),(3,'人事部');
SELECT * FROM dept;
-- drop table emp;
CREATE TABLE emp(id INT PRIMARY KEY,emp_name VARCHAR(20) NOT NULL,job VARCHAR(10),top_id INT,hdate DATE,sal DOUBLE,bonus double,dept_id INT);
INSERT INTO emp VALUES
(1,'张三','软件工程师',3,'2002-03-26',5000,null,1),
(2,'张三三','软件工程师',3,'2005-04-27',7000,700,1),
(3,'李四','软件工程师',7,'2001-07-12',9000,500,1),
(4,'王五','销售',6,'2010-03-15',1400,500,2),
(5,'赵六','销售',6,'2011-05-03',3000,1000,2),
(6,'ABC','销售',7,'2021-06-27',10000,500,2),
(7,'小七','总经理',NULL,'1999-05-20',1000,500,NULL);
create table job_grade(grade_level char(1),lowest_sal int,highest_sal int);
insert into job_grade values('A',1000,2999),('B',3000,5999),('C',6000,9999),('D',10000,14999),('E',15000,24999);
select * from job_grade;
-- drop database if exists mydb1; 

-- 1.查询emp表中薪资大于3000的所有员工，显示员工姓名、薪资
select * from emp;
select emp_name,sal from emp where sal >3000;

-- 2.查询emp表中总薪资(薪资+奖金)大于3500的所有员工，显示员工姓名、总薪资
select emp_name,sal+bonus as 总薪资 from emp where sal+bonus >3500;

-- ifnull(列, 值)函数: 判断指定的列是否包含null值, 如果有null值, 用第二个值替换null值
-- 如ifnull(bonus,0)表示如果bonus列中的值为null则用0替换

-- 3.注意查看上面查询结果中的表头，思考如何将表头中的 sal+bonus 修改为 "总薪资" 
/* 试一试：where中能使用定义好的别名吗？ */
select emp_name,sal+bonus as 总薪资 from emp where sal+bonus >3500;

-- 4.查询emp表中薪资在3000和4500之间的员工，显示员工姓名和薪资
select emp_name,sal from emp where sal between 3000 and 4500;

-- 5.查询emp表中薪资为 1400、1600、1800的员工，显示员工姓名和薪资
select emp_name,sal from emp where sal in (1400,1600,1800);

-- 6.查询薪资不为1400、1600、1800的员工
select emp_name,sal from emp where not sal in (1400,1600,1800);

-- 7.查询emp表中薪资大于4000和薪资小于2000的员工，显示员工姓名、薪资。
select emp_name,sal from emp where sal > 4000 or sal <2000;
select emp_name,sal from emp where sal > 4000 || sal <2000;

-- 8.查询emp表中薪资大于3000并且奖金小于600的员工，显示员工姓名、薪资、奖金。
select emp_name,sal,bonus from emp where sal > 3000 and bonus < 600;
select emp_name,sal,bonus from emp where sal > 3000 && bonus < 600;

-- 处理null值
-- 9.查询没有部门的员工（即部门列为null值）
select * from emp where dept_id is null;

-- ************* Like模糊查询 *************
/* like进行模糊查询，"%" 表示通配，表示0或多个字符。"_"表示一个任意的字符 */
-- 10.查询emp表中姓名中以"张"开头的员工，显示员工姓名。
select emp_name from emp where emp_name like '张%';

-- 11.查询emp表中姓名以"张"开头并且姓名为2个字的员工，显示员工姓名。
select emp_name from emp where emp_name like '张_';
