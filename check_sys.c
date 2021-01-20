#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//方法1
//思路
//int a = 1;
//0x01 00 00 00  小端
//0x00 00 00 01  大端
//查看第一个字节是什么
//解引用，如果是int*，会向后访问四个字节，我们只需要访问一个字节
//所以强转换char*

int check_sys1()
{
	int a = 1;
	return (*(char*)&a);
}

//方法2
//联合体成员公用一块内存空间
int check_sys2()
{
	union Un
	{
		char c;
		int i;
	}u;
	u.i = 1;
	return u.c;
}

int main()
{
	int ret = check_sys2();
	if (ret == 1)
	{
		printf("小端");
	}
	else 
	{
		printf("大端");
	}
	return 0;
}


