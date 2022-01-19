#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 19;
//	if (a < 18)
//		printf("未成年");
//	else
//	{
//		if (a > 18 && a <= 23)
//			printf("青年");
//		else if (a > 23 && a <= 40)
//			printf("中年");
//		else if (a > 40 && a <= 100)
//			printf("老年");
//		else if (a > 100)
//			printf("老不死的");
//	}
//	return 0;
//}

//int main()
//{
//	int a ;
//	scanf("%d", &a);
//	if (a >= 1 && a <= 100)
//	{
//		if (a % 2 == 0)
//			printf("这个数是偶数");
//		else
//			printf("%d", a);
//	}
//	else
//		printf("这个数字大于100了");
//
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	
//	
//	while (a <= 100)
//	{
//		if (a % 2 == 1)
//
//			printf("%d\n", a);
//		a++;
//
//	}
//	return 0;
//}
//int main()
//{
//	int day;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1 :
//		printf("星期一\n"); break;
//	case 2 : 
//		printf("星期二\n"); break;
//	case 3:
//		printf("星期3\n"); break;
//	case 4:
//		printf("星期4\n"); break;
//	case 5:
//		printf("星期5\n"); break;
//	case 6:
//		printf("星期6\n"); break;
//	case 7:
//		printf("星期天\n"); break;
//	}
//
//	return 0;
//}
 //switch 表达式里面必须是整形，  用别的类型会报错！！！！ case 表达式后面必须是常量，不能是变量

//int main()
//{
//	int i = 1;
//	while(i <= 10)
//	{
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}
// 有continue 的时候用于中止本次循环 ，本次循环中不执行continue下面的语句，直接跳到while语句的判断，再开始执行下一次循环的入口判断

int main()
{
	int ch = getchar();
	putchar(ch);
	printf("%c\n", ch);
	return 0;

}
























