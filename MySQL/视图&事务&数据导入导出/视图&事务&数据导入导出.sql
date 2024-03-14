use oa_system;
select * from emp;

create view v1 as select * from emp where sal > 3000;

select id,emp_name,job,sal from v1;

select min(sal) from v1;

select emp_name,dept_name from v1,dept where v1.dept_id = dept.dept_id;

show create view v1;

alter view v1 as select * from emp where sal > 5000;

drop view v1;

show tables;


start transaction;
select * from emp;
update emp set sal=sal+1000 where id = 1;
update emp set sal=sal+1000 where id = 3;
rollback;
commit;

start transaction;
select * from emp;
update emp set bonus=700 where id=1;
update emp set bonus=700 where id=3;
savepoint sav1;

update emp set sal=3500 where id=5;
update emp set sal=4000 where id=7;

rollback to savepoint sav1;
rollback;
commit;

select version();
导出数据
select * from emp into outfile 'D:\stu.txt';
导入数据
mysqlimport -u[name] -p[secrect] [table_name] [table_address]