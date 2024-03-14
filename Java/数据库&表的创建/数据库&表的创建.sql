create database if not exists school_system;
use school_system;
create table if not exists student(
stu_id int primary key auto_increment,
stu_name varchar(20) not null,
stu_age int,
birthday date
);
desc student;
create database if not exists shop;
use shop;
create table if not exists customer(
id int primary key auto_increment,
cus_name varchar(20) not null,
nick_name varchar(20) not null,
addr varchar(50),
age int,
birthday date
);
desc customer;
create table if not exists product(
id int primary key auto_increment,
pro_name varchar(100) not null,
price int not null,
pro_num int
);
desc product;
create table if not exists cus_order(
c_o_id int primary key auto_increment,
pro_id int not null,
cus_id int not null,
cus_order_num int not null,
cus_order_time datetime not null,
foreign key (pro_id) references product(id),
foreign key (c_o_id) references customer(id)
);
desc cus_order;
