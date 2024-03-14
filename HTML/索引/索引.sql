-- 常规索引
create database if not exists mydb2 charset utf8;
create table if not exists stu(
stu_id int primary key auto_increment,
stu_name varchar(10) not null,
birthday date,
index stu_name_index (stu_name)
);
select * from stu;
use mydb2;
show index from stu;
drop index stu_name_index on stu;
create index stu_name_index on stu(stu_name);

-- 全文索引
create table ft(
copy text,
fulltext(copy)
);
insert into ft(copy) values ('once upon a time'),('there was a wicked witch'),('who ate everybody up');
select * from ft where match copy against ('time');