import mysql.connector

conn = mysql.connector.connect(host="localhost", database="mysql_python_test", user="root", password="root")

cur = conn.cursor()

# 创建数据表
cur.execute("drop table if exists `company`")
cur.execute("""
create table company
(
    `id` int primary key not null,
    `name` varchar(100) not null,
    `age` int not null,
    `address` varchar(100) not null,
    `salary` real
)
""")

#数据表插入数据


# 关闭数据库链接
conn.close()

