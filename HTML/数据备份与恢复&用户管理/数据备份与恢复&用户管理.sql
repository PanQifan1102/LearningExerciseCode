-- 数据备份
mysqldump -u root -p school > c:/school.sql;

mysqldump -u root -p school stu >c:/school.sql;

mysqldump -u root -p --databases school test > c:/school.sql;

mysqldump -u root -p --all-databases > c:/school.sql;

-- 数据恢复
mysql -u root -p school < c:/school;


-- 用户管理
创建用户


create user 'zs' identified by 'zs';
指定主机创建用户
create user 'ls' @'192.163.131.2' identified by 'ls';
创建用户，但不明文显示密码
select password('ww');# 创建成功后删除
create user 'ww' @'192.163.121.2' identified by password '*192064D30D2DA90C00E499A4719A4ABFA62A9BE7';
创建无密码的账户
create user 'zl';

rename user 'zx' to 'zss';

set password for 'zss' = password ('zss')

drop user 'zss';

delete from mysql.user where user = 'zss';
flush privileges;

grant all privileges on school to 'zss' by 'zss';

show grants for 'zss';

remoke all privileges on school from 'zss';