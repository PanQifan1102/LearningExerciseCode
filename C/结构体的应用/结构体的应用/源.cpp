#include<stdio.h>
struct Student //������Ϣ����
{
	char name[20];//����
	int age;//����
	char sex[5];//�Ա�
	char id[15];//ѧ��
};
int main()//�ṹ��Ĵ������Ż�
{
	struct Student s = { "����",18,"��","123456789" };
	printf("1:%s %d %s %s\n",s.name,s.age,s.sex,s.id);
	struct Student* ps = &s;
	printf("2:%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).id);
	printf("2:%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->id);

	return 0;
}