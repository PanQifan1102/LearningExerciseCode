-- 分组查询、聚合函数、排序
/* 分组的语法: select 查询的列 from 表名 group by 列名(根据指定的列进行分组) */
1.对emp表按照职位进行分组, 并统计每个职位的人数, 显示职位和对应人数
use mydb1;	
select * from emp;
select job,count(job) job_num from emp group by job;
# ①'from'确定我要查'emp'这个表；②'group by'对这个表进行分组处理；③'having'对分组处理后的表进行计算；
# ④'select'对表的信息进行收集统计。

2.对emp表按照部门进行分组, 求每个部门的最高薪资(不包含奖金)，显示部门名称和最高薪资
select * from emp;
select job,max(sal) from emp group by job;

3.统计emp表中薪资大于3000的员工个数（- count(column)统计某列的行数）
select count(emp_name) emp_num from emp where sal > 3000;

-- 注意:聚合函数在统计时会自动剔除null值(即null不参与统计)
4.统计emp表中所有员工的薪资总和(不包含奖金)（- sum(column)对某列的值求和）
select sum(sal) sal_sum from emp; 

5.统计emp表员工的平均薪资(不包含奖金)（- avg(column)对某列的值求平均值）
select avg(sal) sal_avg from emp;

6.查询emp表中2021年之前入职的员工，显示姓名、入职日期hdate。
select emp_name,hdate from emp where year(hdate) < 2021;

/* 排序：order by 排序的列 asc 升序(从低到高)  desc 降序(从高到低)默认为升序 */
7.对emp表中所有员工的薪资进行升序(从低到高)排序，显示员工姓名、薪资。
select emp_name,sal from emp order by sal asc;

8.对emp表中所有员工奖金进行降序(从高到低)排序，显示员工姓名、奖金。
select emp_name,bonus from emp order by bonus desc;

-- 分页查询
/*在mysql中，通过limit进行分页查询：limit (页码-1)*每页显示记录数, 每页显示记录数 */
1.查询emp表中的所有记录，分页显示：每页显示5条记录，返回第 1 页。
use mydb1;
select * from emp limit 0,5;

2.查询emp表中的所有记录，分页显示：每页显示5条记录，返回第 2 页。
select * from emp limit 5,5;

-- 关联查询、外连接查询
1.查询所有部门和部门下的员工，如果部门下没有员工，员工显示为null
select dept.dept_name,emp.emp_name from emp,dept where emp.dept_id = dept.dept_id;

2.查询部门和所有员工，如果员工没有所属部门，部门显示为null
select emp.emp_name,dept.dept_name from emp left join dept on emp.dept_id = dept.dept_id;

-- 子查询、多表查询
1.列出薪资比'张三'薪资高的所有员工，显示姓名、薪资
select emp_name,sal from emp where sal > (select sal from emp where emp_name = '张三');

2.列出与'王五'从事相同职位的所有员工，显示姓名、职位、部门。
select emp_name,job,dept.dept_name from emp,dept 
where job = (select job from emp where emp_name = '王五')
and emp.dept_id = dept.dept_id;

3.列出薪资比'软件'部门(已知部门编号为1)所有员工薪资都高的员工信息，显示员工姓名、薪资和部门名称。
select * from dept;
select emp_name,sal,dept_name from emp,dept 
where sal > all(select sal from emp where dept_id = 1)
and emp.dept_id = dept.dept_id; 

4.列出在'销售部'任职的员工，假定不知道'销售部'的部门编号， 显示部门名称，员工名称。
# program1
select dept_name,emp_name from emp,dept 
where  emp.job = '销售' and dept.dept_name ='销售部';
# program2
select dept_name,emp_name from emp,dept 
where emp.dept_id = dept.dept_id 
and dept.dept_id not in(1,3);

5.(自查询)列出所有员工及其直接上级，显示员工姓名、上级编号，上级姓名
select e1.emp_name,e2.id,e2.emp_name from emp e1,emp e2
where e1.top_id = e2.id;

6.列出最低薪资大于1500的各种职位，显示职位和该职位最低薪资
select * from emp;
select job,min(sal) lowest_sal from emp where sal > 1500; 

7.列出在每个部门就职的员工数量、平均工资。显示部门编号、员工数量，平均薪资。
select dept_id,count(*),avg(sal) from emp group by dept_id;

8.查出至少有一个员工的部门。显示部门编号、部门名称、部门人数。
select * from emp;
select * from dept;
select emp.dept_id,dept.dept_name,count(*) 
from emp,dept where emp.dept_id = dept.dept_id group by emp.dept_id;

9.列出受雇日期早于直接上级的所有员工的编号、姓名、部门名称。
select * from emp;
select e1.id,e1.emp_name,dept.dept_name from emp e1,emp e2,dept
where year(e1.hdate) < year(e2.hdate) and e1.top_id = e2.id and e1.dept_id = dept.dept_id; 

10.列出每个部门薪资最高的员工信息，显示部门编号、员工姓名、薪资
select dept_id,max(sal) from emp group by dept_id; # 显示每个部门的最高工资
select emp.dept_id,emp_name,sal 
from (select dept_id,max(sal) highest_sal from emp group by dept_id) dept_max_sal,emp
where dept_max_sal.highest_sal = emp.sal; 
