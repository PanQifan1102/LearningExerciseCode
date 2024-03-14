#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define NUM 999
void enter();
void search_num();
void dele_num();
void modi_num();
void browse();
void count();
void load();
void add();
void menu();
int n;   //Ա��������
struct emploee  //ְ�����ݽṹ
{
    
    char no[5];
    char name[8];
    float wage1;      //Ա���Ļ�������
    float fine;      //�ۿ�
	float wage2;      //Ա����Ӧ������
	float TAXfee;     //˰��
	float wage3;      //Ա����ʵ������
}emp[NUM], newemp;
int main()          
{
    menu();
}

void menu()//������
{
    int n, w1;

    do
    {
        system("cls");
        printf("************* ְ�����ʹ���ϵͳ **************\n");
        printf("*            1-----Enter list /*����ְ����Ϣ */                    *\n");
        printf("*            2-----List all /*���ȫ��ְ�� ��ѯְ����Ϣ */                    *\n");
        printf("*            3-----Call the salary /*����ʵ������ ����ְ��ID���޸� */             *\n");
        printf("*            4-----Search record on name /*��ѯְ����Ϣ ����ְ��ID��ɾ��*/              *\n");
        printf("*            5-----Delete a record /*����ְ��ID��ɾ�� �ݹ���ͳ�Ʋ���� */             *\n");
        printf("*            6-----Sort on sfgz /*����ʵ�������������� ���ļ�������Ϣ */                *\n");
        printf("*            7-----Computer ticket number /*��������Ʊ���� ���ȫ��ְ�� */                   *\n");
        printf("*            8-----Total on number  /*����ϼ� ׷��ְ����Ϣ*/                    *\n");
        printf("*            9-----Quit  /*�˳����� */                          *\n");
        printf("***************************************************\n");
        printf("       ��������ѡ��(1-9):[ ]\b\b");
        scanf("%d", &n);
        if (n < 1 || n>9)                                    //��ѡ����������ж�
        {
            w1 = 1;
            printf("your choice is not between 1 and 9,Please input again:");
            getchar();
        }
        else    w1 = 0;
    } while (w1 == 1);
    switch (n)
    {
    case 1:Enter list();    break;
    case 2:List all();   break;
    case 3:Call the salary();   break;
    case 4:Search record on name();   break;
    case 5:Delete a record();    break;
    case 6:Sort on sfgz();    break;      
    case 7:Computer ticket number();    break;     
    case 8:Total on number();    break;
    case 9:printf("\n���������������˳�����������������\n\n");
    default:exit(0);  //�˳�ϵͳ,exit(0)�����������˳�����
    }
}
/*************************¼��ģ��**********************/
void Enter list()
{
    FILE* fp;
    int n, i;
    if ((fp = fopen("emp.txt", "wb")) == NULL)
    {

        printf("���ܽ���emp�ļ�\n");
        exit(1);
    }
    printf("����ְ������:");
    scanf("%d", &n);
    printf("�����ʽ:��� ���� �������� �ۿ� Ӧ������ ˰�� ʵ������\n");
    for (i = 0; i < n; i++)   /*  ѭ����ȡn��ְ����¼ */
    {
        printf("��%d��ְ��:", i + 1);
        scanf("%s%s%f%f%f%f%f", emp[i].no, emp[i].name,&emp[i].wage1,&emp[i].fine,&emp[i].wage2,&emp[i].TAXfee,&emp[i].wage3);
        emp[i].wage2 = emp[i].wage1 -emp[i].fine;
        emp[i].wage3 = emp[i].wage1 -emp[i].fine- emp[i].TAXfee;

    }
    for (i = 0; i < n; i++)      /*��n��ְ����¼д���ļ�*/
        fwrite(&emp[i], sizeof(struct emploee), 1, fp);
    fclose(fp);
}
/*************************ͳ��ģ��**********************/
void count()
{
    FILE* fp;
    int n, num;
    if ((fp = fopen("emp.txt", "rb")) == NULL)
    {
        printf("���ܴ�emp�ļ�\n");
        exit(1);
    }
    printf("�����빤����:");
    scanf("%d", &num);
    printf("��� ���� �������� �ۿ� Ӧ������ ˰�� ʵ������\n");
    for (n = 0; fread(&emp[n], sizeof(struct emploee), 1, fp) != 0; n++)
        if (emp[n].wage3 >= num)
            printf("%6d%6s%.1f   %.1f  %.1f   %.1f   %.1f\n", n + 1, emp[i].no, emp[i].name,&emp[i].wage1,&emp[i].fine,&emp[i].wage2,&emp[i].TAXfee,&emp[i].wage3);
    fclose(fp);
}
/******************����ʵ������*********************/
void Call the salary()
{
	

    
}
/********************ɾ��ģ��*******************/

void Delete a record()
{
    FILE* fp;
    int i, j, n;
    char num[5];
    if ((fp = fopen("emp.txt", "rb")) == NULL)
    {
        printf("���ܴ�emp�ļ�\n");
        exit(1);
    }
    printf("ɾ��ǰ:\n");
    printf("��¼�� ��� ���� �������� �ۿ� Ӧ������ ˰�� ʵ������\n");
    for (n = 0; fread(&emp[n], sizeof(struct emploee), 1, fp); n++)
        printf("%6d%6s%.1f   %.1f  %.1f   %.1f   %.1f\n", n + 1, emp[i].no, emp[i].name,&emp[i].wage1,&emp[i].fine,&emp[i].wage2,&emp[i].TAXfee,&emp[i].wage3);/*nΪemp�ļ��м�¼��*/
    printf("Ҫɾ���ı��:");
    scanf("%s", num);
    for (i = 0; (strcmp(emp[i].no, num) != 0 && i < n); i++)
        if (i >= n)
        {
            printf("\tû��%sְ���ŵ�ְ��\n", num);
            exit(2);
        }
    fclose(fp);
    fp = fopen("emp.dat", "w+");
    if (n == 1)  /*һ����¼�Ѿ�ɾ����*/
    {
        fclose(fp);
        exit(3);
    }
    for (j = 0; j < i; j++)
        fwrite(&emp[j], sizeof(struct emploee), 1, fp);
    for (j = i + 1; j < n; j++)
        fwrite(&emp[j], sizeof(struct emploee), 1, fp);
    printf("ɾ����:\n");
    fseek(fp, 0, SEEK_SET);
    printf("��¼�� ��� ���� �������� �ۿ� Ӧ������ ˰�� ʵ������\n");
    for (i = 0; fread(&emp[i], sizeof(struct emploee), 1, fp); i++)
        printf("%6d%6s%.1f   %.1f  %.1f   %.1f   %.1f\n", i + 1, emp[i].no, emp[i].name,&emp[i].wage1,&emp[i].fine,&emp[i].wage2,&emp[i].TAXfee,&emp[i].wage3);
    fclose(fp);
}
/********************�޸�ģ��*******************/
void modi_num()
{
    FILE* fp;
    int i, j;
    char num[5];
    if ((fp = fopen("emp.txt", "rb+")) == NULL)
    {
        printf("���� ��emp�ļ�\n");
        exit(1);
    }
    printf("Ҫ�޸ĵı��:");
    scanf("%s", num);
    for (i = 0; fread(&emp[i], sizeof(struct emploee), 1, fp); i++)
        if (!strcmp(emp[i].no, num))break;
    if (feof(fp))
    {
        printf("\tû��%sְ���ŵ�ְ��\n", num);
        exit(2);
    }
    printf("��� ���� �������� �ۿ� Ӧ������ ˰�� ʵ������\n");
    printf("%6d%6s%.1f   %.1f  %.1f   %.1f   %.1f\n", i + 1, emp[i].no, emp[i].name,&emp[i].wage1,&emp[i].fine,&emp[i].wage2,&emp[i].TAXfee,&emp[i].wage3);
    printf("�����ʽ:��� ���� �������� �ۿ� Ӧ������ ˰�� ʵ������\n");
    printf("��%d����¼:", i + 1);
    scanf("%s%s%f%f%f%f%f", newemp.no, newemp.name,
        &newemp.wage1, &newemp.fine,&newemp.wage2, &newemp.TAXfee, &newemp.wage3);//��ȡ�µ�ְ����¼
        newemp.wage2 = newemp.wage1 - newemp.fine ;
    newemp.wage3 = newemp.wage1 - newemp.fine - newemp.TAXfee;
    fseek(fp, -(long)sizeof(struct emploee), SEEK_CUR);  //�ļ�ָ��ָ����޸ĵļ�¼��ͷ
    fwrite(&newemp, sizeof(struct emploee), 1, fp);  //��newemp���ǵ�ǰ��¼
    printf(" �޸ĺ�:\n");
    fseek(fp, 0, SEEK_SET);        //��ʾ�޸ĺ���ļ�����
    printf("��� ���� �������� �ۿ� Ӧ������ ˰�� ʵ������\n");
    for (i = 0; fread(&emp[i], sizeof(struct emploee), 1, fp) != 0; i++)
        printf("%6s%6s%.1f   %.1f  %.1f   %.1f   %.1f\n", i + 1, emp[i].no, emp[i].name,&emp[i].wage1,&emp[i].fine,&emp[i].wage2,&emp[i].TAXfee,&emp[i].wage3);
    fclose(fp);
}
/*************************��ѯģ��***********************/
void Search record on name()
{
    FILE* fp;
    int i;
    char num[5];
    if ((fp = fopen("emp.txt", "rb")) == NULL)
    {
        printf("���ܴ�emp�ļ�\n");
        exit(1);
    }
    printf("Ҫ��ѯ�ı��:");
    scanf("%s", num);
    for (i = 0; fread(&emp[i], sizeof(struct emploee), 1, fp); i++)
        if (!strcmp(emp[i].no, num)) break;
    if (feof(fp))
    {
        printf("\t���޴���\n");
        exit(2);
    }
    printf("��� ���� �������� �ۿ� Ӧ������ ˰�� ʵ������\n");
    printf(%6s%6s%.1f   %.1f  %.1f   %.1f   %.1f\n", i + 1, emp[i].no, emp[i].name,&emp[i].wage1,&emp[i].fine,&emp[i].wage2,&emp[i].TAXfee,&emp[i].wage3);
    fclose(fp);
}
/*******************���ģ��********************/
void List all()
{
    int i;
    FILE* fp;
    if ((fp = fopen("emp.txt", "r")) == NULL)
    {
        printf("���ܴ�emp�ļ�\n");
        exit(0);
    }
    printf("��� ���� �������� �ۿ� Ӧ������ ˰�� ʵ������\n");
    for (i = 0; fread(&emp[i], sizeof(struct emploee), 1, fp) != 0; i++)
    {
        printf("%6s%6s%.1f   %.1f  %.1f   %.1f   %.1f\n", i + 1, emp[i].no, emp[i].name,&emp[i].wage1,&emp[i].fine,&emp[i].wage2,&emp[i].TAXfee,&emp[i].wage3);
    }
    fclose(fp);
}
/******************׷��ģ��*******************/
/*void add()
{
    FILE* fp;
    int n, i, j;
    if ((fp = fopen("emp.txt", "ab+")) == NULL)
    {
        printf("���ܴ�emp�ļ�\n");
        exit(0);
    }
    printf("Ҫ׷�ӵ�ְ������:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("�����ʽ:��� ���� �������� �ۿ� Ӧ������ ˰�� ʵ������\n");
        printf("׷�Ӽ�¼:\n");
         scanf("%s%s%f%f%f%f%f", newemp.no, newemp.name,
        &newemp.wage1, &newemp.fine,&newemp.wage2, &newemp.TAXfee, &newemp.wage3);//��ȡ�µ�ְ����¼
        newemp.wage2 = newemp.wage1 - newemp.fine ;
    newemp.wage3 = newemp.wage1 - newemp.fine - newemp.TAXfee;//��ȡһ���µ�ְ����¼
        fwrite(&newemp, sizeof(struct emploee), 1, fp);   //����ְ����¼д���ļ�
    }
    fclose(fp);
}*/

/*************************����ģ��**********************/
void load()          //���ؼ�¼����Լ����¼�����ĺ���
{
    FILE* fp;
    int i, w;
    w = 1;
    system("cls");
    if ((fp = fopen("emp.txt", "rb")) == NULL)      //������򿪷�ʽ,�ڴ�ǰ�ļ�¼������
    {
        printf("\nCannot open file\n");
        w = 0;
        return;
    }
    n = 0;
    for (i = 0; !feof(fp); i++)
    {
        fread(&emp[i], sizeof(struct emploee), 1, fp);
        n++;
    }
    n = n - 1;
    fclose(fp);
    if (w == 1)
    {
        printf("Load file ok!");
        getchar();
        getchar();
        menu();
    }
}

