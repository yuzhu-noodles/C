#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//����1
//˼·
//int a = 1;
//0x01 00 00 00  С��
//0x00 00 00 01  ���
//�鿴��һ���ֽ���ʲô
//�����ã������int*�����������ĸ��ֽڣ�����ֻ��Ҫ����һ���ֽ�
//����ǿת��char*

int check_sys1()
{
	int a = 1;
	return (*(char*)&a);
}

//����2
//�������Ա����һ���ڴ�ռ�
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
		printf("С��");
	}
	else 
	{
		printf("���");
	}
	return 0;
}


