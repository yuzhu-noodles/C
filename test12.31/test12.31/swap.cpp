#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//交换两个变量，不能创建临时变量
//两种方法
void swap(int a,int b)
{
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("a = %d\n", a);
	printf("b = %d\n", b);
}
//void swap(int a, int b)
//{
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a = %d\n", a);
//	printf("b = %d\n", b);
//}
int main()
{
	int num1 = 0;
	int num2 = 0;
	scanf("%d%d", &num1,&num2);
	swap(num1,num2);
	return 0;
}