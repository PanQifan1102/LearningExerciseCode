use mydb1;
select * from emp;
select max(sal),job,sal from emp where dept_id is not null group by dept_id;

select max(bonus),job,sal from emp where dept_id is not null group by dept_id;

select avg(sal),job from emp where dept_id is not null group by dept_id order by sal;

#重点关注
select dept_id,round(avg(ifnull(bonus,0)),1) as avg_bonus from emp where dept_id is not null
group by dept_id order by avg_bonus desc;