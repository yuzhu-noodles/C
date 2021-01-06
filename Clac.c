#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void menu()
{
	printf("***********************\n");
	printf("*****1.add   2.sub*****\n");
	printf("*****3.mul   4.div*****\n");
	printf("*****   0.exit   ******\n");
	printf("***********************\n");
}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
//3
void Clac(int (*pf)(int, int))
{
	int x = 0;
	int y = 0;
	printf("请输入两个操作数：");
	scanf("%d%d", &x, &y);
	printf("%d\n", pf(x,y));
}
int main()
{
	int input = 0;

	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			Clac(Add);
			break;
		case 2:
			Clac(Sub);
			break;
		case 3:
			Clac(Mul);
			break;
		case 4:
			Clac(Div);
			break;
		case 0:
			printf("退出！\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);	
}
//2、函数指针数组
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int(*pfarr[5])(int, int) = { 0,Add,Sub,Mul,Div }; //函数指针数组
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个操作数：");
//			scanf("%d%d", &x, &y);
//			int ret = pfarr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出！");
//		}
//		else
//		{
//			printf("选择错误！");
//		}
//	} while (input);
//	return 0;
//}

//1、普通做法
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个操作数：");
//			scanf("%d%d", &x, &y);
//			printf("%d\n",Add(x,y));
//			break;
//		case 2:
//			printf("请输入两个操作数：");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("请输入两个操作数：");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("请输入两个操作数：");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		case 0:
//			printf("退出！\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);	
//}