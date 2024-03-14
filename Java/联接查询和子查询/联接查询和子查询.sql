use mydb1;
select id,emp_name,job,dept_name from emp,dept where emp.dept_id = dept.dept_id; 

use shop;
select order_id,product_id,customer.customer_id,customer_name from cus_order,customer 
where cus_order.customer_id = customer.customer_id;

use mydb1;
select emp.*,dept_name from emp left join dept on emp.dept_id = dept.dept_id;
select emp.*,dept_name from dept right join emp on emp.dept_id = dept.dept_id;

select emp.*,dept_name from dept left join emp on emp.dept_id = dept.dept_id;
select emp.*,dept_name from emp right join dept on emp.dept_id = dept.dept_id;

use shop;
insert into cus_order values (1002,2,4,5),(1003,1,3,1);
select * from cus_order;
select * from products;

select order_id,product_name,customer_name,price from customer,cus_order,products 
where customer.customer_id = cus_order.customer_id 
and cus_order.product_id = products.product_id;

select products.product_id,product_name from products,cus_order 
where products.product_id = cus_order.product_id; 

select order_id,customer_name from cus_order,customer 
where cus_order.customer_id = customer.customer_id;  

select products.*,cus_order.order_number 
from products left join cus_order on products.product_id = cus_order.product_id order by product_name;

select * from cus_order;
select * from products;

use mydb1;
select e1.id,e1.emp_name,e2.id,e2.emp_name from emp e1,emp as e2 
where e1.top_id = e2.id;

select e1.id,e1.emp_name,e2.id,e2.emp_name 
from emp e1 left join emp e2 on e1.top_id = e2.id;

use mydb1;
select * from emp;
select bonus from emp where emp_name = '张三三';
select * from emp where bonus > (select bonus from emp where emp_name = '张三三');

select * from emp where bonus in(select bonus from emp where emp_name in('王五','赵六'));

select * from emp where sal > all(select sal from emp where emp_name in('王五','赵六'));

select * from emp where sal > any(select bonus from emp where emp_name in('王五','赵六'));

use mydb1;
select dept_avg_sal.*,grade_level from 
(select dept_id,avg(sal) avg_sal from emp where dept_id is not null group by dept_id) dept_avg_sal,job_grade
where dept_avg_sal.avg_sal between lowest_sal and highest_sal;

use shop;
select * from customer;
select * from products;
select * from cus_order;

select customer.*,cus_order.product_id from customer,cus_order 
where customer.customer_id = cus_order.customer_id;

select products.*,customer_id,customer_name 
 from products left join 
   (select customer.*,cus_order.product_id from customer,cus_order 
    where customer.customer_id = cus_order.customer_id) cus_message
 on products.product_id = cus_message.product_id
 order by product_id;