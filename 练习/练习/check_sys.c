#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

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
int check_sys()
{
	int a = 1;
	char* p = (char*)&a;
	return *p;
	//返回1,小端
	//返回0，大端
}
int main()
{
	//检测当前机器的字节序
	int ret = check_sys();
	if (ret = 1)
		printf("大端\n");
	else
		printf("小端\n");
	return 0;
}