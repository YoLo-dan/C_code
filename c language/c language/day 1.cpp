#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int input = 0;
//	printf("�������\n");	
//	printf("��Ҫ�ú�ѧϰ��?");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("������� �����offer");
//	else
//		printf("������ȥ��");
//
//	return 0;
//}
//int main()
//{	
//	int line = 0;
//	printf("�������\n");
//	while (line < 20000)
//	{
//		printf("��һ�д���:%d\n",line);
//		line++;
//	}	
//	while (line>=20000&&line<=20010)
//	{
//		printf("��offer");
//	}
//
//		return 0;
//}

//int Add(int a, int b)
//{
//	int c = a + b;
//	return c;
//}
//
//int main()
//{
//	int sum1 = 0;
//	int sum2 = 0;
//	int sum = 0;
//	sum1 = 15;
//	sum2 = 10;
//	Add(sum1, sum2);
//	sum = Add(sum1, sum2);
//	int a = 2000, b = 3000;
//	sum2 = Add(a, b);
//	printf("a+b = %d", sum2);
//	//printf("%d+%d��ֵ��%d", sum1, sum2,sum);
//	
//
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	              //0,1,2,3,4,5,6,7,8,9     ������±�
//	printf("%d\n", arr[4]); //arr[�±�]��������Ԫ��
//	int i = 0;
//	for (i = 0; i <= 9; i++)
//	{
//		printf("%d\n", arr[i]);
//
//	}
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 3;
//	int c = a % b;
//	printf("%d", c);
//	return 0;
//}

//int main()
//{
//	int a = 1;//01   ����1 ռ4  byte 32bitλ
//	int b= a << 3;
//	printf("a = %d\n", a);
//	printf("b= %d", b);
//	return 0;
//}

//int main()
//{
//	int a = 5;  //0101
//	int b = 3;  //0011
//	int c = a | b; // 0111
//	printf("c = %d", c);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = a--;//b = 10,a = 11;
//	printf("b = %d,a = %d\n", b, a);
//
//	int x = 100;
//	int y = x--;
//	printf("x = %d, y = %d", x, y);
//	return 0;
//}


//int main()
//{
//	typedef unsigned int u_int;
//	unsigned int num = 20;
//	u_int a = 100;
//	printf("%d", a);
//
//	return 0;
//}

//void test()
//{
//	// static ���ξֲ�����
//	// �ֲ������������ڱ䳤
//	//static ����ȫ�ֱ���
//	// ȫ�ֱ��� �ı��������� �þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�
//	// static�������κ���
//
//
//	static int a = 1;//a��һ����̬�ֲ�����
//	a++;
//	printf("a = %d\n", a);
//
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//
//	return 0;
//}

//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = MAX(a, b);
//	printf("max = %d", max);
//
//	return 0;
//}


//int main()
//{
//	/*int a = 10;
//	int* p;
//	p = &a;
//	*p = a;
//	printf("%p\n", p);
//	printf("%p\n", &a);
//	printf("%d\n", *p);
//	printf("%d\n", a);*/
//	int* p = NULL;
//	printf("%p", p);
//	return 0;
//}

//int main()
//{
//	float a = 10;
//	float* p = &a;
//	*p = 6.3;
//	printf("%.2f\n", *p);
//	printf("%.2f\n", a);
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(p));
//	printf("%d\n", sizeof(*p));
//	return 0;
//}


struct Book
{
	char name[20];
	int  price;


};

int main()
{
	struct Book b1 = { "eeee",200 };
	struct Book* pb = &b1; 


	//printf("������%s\n  �۸�Ϊ:%d\n", b1.name, b1.price);
	printf("������%s\n  �۸�Ϊ:%d", pb->name, pb->price);
	return 0;
}