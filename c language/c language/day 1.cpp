#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int input = 0;
//	printf("加入比特\n");	
//	printf("你要好好学习吗?");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("你很厉害 给你好offer");
//	else
//		printf("卖红薯去吧");
//
//	return 0;
//}
//int main()
//{	
//	int line = 0;
//	printf("加入比特\n");
//	while (line < 20000)
//	{
//		printf("敲一行代码:%d\n",line);
//		line++;
//	}	
//	while (line>=20000&&line<=20010)
//	{
//		printf("好offer");
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
//	//printf("%d+%d的值是%d", sum1, sum2,sum);
//	
//
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	              //0,1,2,3,4,5,6,7,8,9     数组的下标
//	printf("%d\n", arr[4]); //arr[下标]访问数组元素
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
//	int a = 1;//01   整形1 占4  byte 32bit位
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
//	// static 修饰局部变量
//	// 局部变量生命周期变长
//	//static 修饰全局变量
//	// 全局变量 改变了作用域 让静态的全局变量只能在自己所在的源文件内部
//	// static可以修饰函数
//
//
//	static int a = 1;//a是一个静态局部变量
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


	//printf("书名：%s\n  价格为:%d\n", b1.name, b1.price);
	printf("书名：%s\n  价格为:%d", pb->name, pb->price);
	return 0;
}