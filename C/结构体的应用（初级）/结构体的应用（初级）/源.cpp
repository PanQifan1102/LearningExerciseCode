#include<stdio.h>
//�ṹ�崫��
struct B
{
	char c;
	short s;
	double d;
};
struct Stu
{
	struct B sb;
	char name[20];
	int age;
	char id[20];
};

void print1(struct Stu t)//��ֵ����
{
	printf("%c %d %lf %s %d %s\n", t.sb.c, t.sb.s, t.sb.d, t.name, t.age, t.id);
}
void print2(struct Stu *ps)//��ַ����
{
	printf("%c %d %lf %s %d %s\n", ps->sb.c, ps->sb.s, ps->sb.d, ps->name, ps->age, ps->id);
 }
int main()
{
	struct Stu s = { {'w',20,3.14},"����",30,"2012"};
	print1(s);
	print2(&s);
	return 0;
}

