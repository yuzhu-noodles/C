#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//打印32位整数的奇数位和偶数位
void print(int n)
{
	int i = 0;
	for ( i = 30; i >= 0; i-=2)
	{
		printf("%d ", (n >> i) & 1);
	}
	printf("\n");
	for (i = 31; i > 0; i-=2)
	{
		printf("%d ", (n >> i) & 1);
	}
}
int main()
{
	int num = 0;
	scanf("%d", &num);
	print(num);
	return 0;
}