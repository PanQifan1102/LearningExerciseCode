show databases;
#办公系统
create database if not exists oa_system charset utf8;
show databases;
use oa_system;
##部门表 
create table if not exists dept( 
dept_id int primary key auto_increment, #部门ID
dept_name varchar(10) #部门名称
);
insert into dept(dept_id,dept_name) values(null,'软件部');
insert into dept(dept_name) values('销售部');
insert into dept(dept_name) values('人事部');
desc dept;
select *from dept;
##员工表
create table if not exists emp(
emp_id int primary key auto_increment, #员工ID
emp_name varchar(20) not null, #员工的名字
emp_job varchar(10), #员工的职位
emp_top_id int, #员工上级的ID
emp_hdate date, #入职日期
emp_sal double, #薪资
emp_bomus double, #奖金
emp_dept_id int #员工所属部门ID
);
insert into emp(emp_id,emp_name,emp_job,emp_top_id,emp_hdate,emp_sal,emp_dept_id) values(null,'张三','软件工程师',3,'2002-03-26',5000,1);
insert into emp(emp_name,emp_job,emp_top_id,emp_hdate,emp_sal,emp_bomus,emp_dept_id) values('张三三','软件工程师',3,'2005-04-27',7000,700,1);
insert into emp(emp_name,emp_job,emp_top_id,emp_hdate,emp_sal,emp_bomus,emp_dept_id) values('李四','软件工程师',7,'2001-07-12',9000,500,1);
insert into emp(emp_name,emp_job,emp_top_id,emp_hdate,emp_sal,emp_bomus,emp_dept_id) values('王五','销售',6,'2020-03-25',1400,500,2);
insert into emp(emp_name,emp_job,emp_top_id,emp_hdate,emp_sal,emp_bomus,emp_dept_id) values('赵六','销售',6,'2011-05-03',3000,1000,2);
insert into emp(emp_name,emp_job,emp_top_id,emp_hdate,emp_sal,emp_bomus,emp_dept_id) values('ABC','销售',7,'2021-06-27',1000,500,2);
insert into emp(emp_name,emp_job,emp_hdate,emp_sal,emp_bomus) values('小八','总经理','1999-05-20',1000,500);
update emp set emp_name='小七' where emp_id = 6;
desc emp;
select *from emp;
##员工薪资等级表
create table if not exists job_grade(
grade_level char(1),
lowest_sal int,
highest_sal int
);
insert into job_grade(grade_level,lowest_sal,highest_sal) values('A',1000,2999); 
insert into job_grade(grade_level,lowest_sal,highest_sal) values('B',3000,5999);
insert into job_grade(grade_level,lowest_sal,highest_sal) values('C',6000,9999);
insert into job_grade(grade_level,lowest_sal,highest_sal) values('D',10000,14999);
insert into job_grade(grade_level,lowest_sal,highest_sal) values('E',15000,20999);
update job_grade set highest_sal=24999 where grade_level = 'oa_systemE;
desc job_grade;
select *from job_grade;    