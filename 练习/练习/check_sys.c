#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//思路
//int n = 1;
//0x 00 00 00 01  大端
//0x 01 00 00 00  小端
//判断第一个字节是否为1.是1为小端，不是为大端


//int check_sys()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//		return 1;
//	else
//		return 0;
//}
//简化
//int check_sys()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	return *p;
//	//返回1,小端
//	//返回0，大端
//}
//int main()
//{
//	//检测当前机器的字节序
//	int ret = check_sys();
//	if (ret = 1)
//		printf("大端\n");
//	else
//		printf("小端\n");
//	return 0;
//}
//#include<windows.h>
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//		Sleep(100);
//	}
//	return 0;
//}
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	return 0;
//}
//#include<stdio.h>
//
//unsigned char i = 0;
//
//int main()
//{
//	for (int i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");
//	}
//	return 0;
//}

//int main()
//{
//	double d = 1E10;
//	printf("%lf\n", d);
//	return 0;
//}
//void test(int arr[])
//{
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
//}
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr);
//	
//	return 0;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//	printf("%s\n", arr);
//	printf("%s\n", pc);
//	return 0;
//}
//int main()
//{
//	char* p = "adssa";
//	*p = 'W';
//	
//	printf("%s\n", p);
//	return 0;
//
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char*p1 = "abcdef";
//	char*p2 = "abcdef";
//	/*if (arr1 == arr2)*/
//	if(p1 == p2)
//		printf("hehe\n");
//	else
//		printf("haha\n");
//	return 0;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6};
//	int arr3[] = { 3,4,5,6,7};
//	int* parr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");	
//	}
//	return 0;
//}
//int main()
//{
//	int* p = NULL; //整形指针--指向整形的指针 --可以存放整形的地址
//	char* pc = NULL;//字符指针 --指向字符的指针--可以存放字符的地址
//	               //数组指针--指向数组的指针--存放数组的地址
//	//int arr[10] = { 0 };
//	//arr  首元素地址
//	//&arr[0] 首元素的地址
//	//&arr  数组的地址
//	
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;
//	//p就是数组指针
//	return 0;
//}
//int main()
//{
//	char* arr[5];
//	char* (*pa)[5] = &arr;
//	int arr2[10] = { 0 };
//	int(*pa2)[10] = &arr2;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (*pa)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(*pa + i));
//	}
//	printf("\n");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*pa)[i]);
//
//	}
//	printf("\n");
//	return 0;
//}
//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print2(int(*p)[5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", *(*(p+i)+j));
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print1(arr, 3, 5);
//	print2(arr, 3, 5);
//	return 0;
//}
//void print(char* str)
//{

//    printf("hehe\n", str);
//}
//void test(void (*p)(char*))
//{
//    printf("test\n");
//    p("bit");
//}
//int main()
//{
//    test(print);
//    return 0;
//}
int main()
{
	int arr[] = 
}