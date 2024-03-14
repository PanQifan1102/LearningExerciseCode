#include<stdio.h>
struct Student //创建信息种类
{
	char name[20];//名字
	int age;//年龄
	char sex[5];//性别
	char id[15];//学号
};
int main()//结构体的创建和优化
{
	struct Student s = { "张三",18,"男","123456789" };
	printf("1:%s %d %s %s\n",s.name,s.age,s.sex,s.id);
	struct Student* ps = &s;
	printf("2:%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).id);
	printf("2:%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->id);

	return 0;
}