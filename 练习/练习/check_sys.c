#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

//˼·
//int n = 1;
//0x 00 00 00 01  ���
//0x 01 00 00 00  С��
//�жϵ�һ���ֽ��Ƿ�Ϊ1.��1ΪС�ˣ�����Ϊ���


//int check_sys()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//		return 1;
//	else
//		return 0;
//}
//��
int check_sys()
{
	int a = 1;
	char* p = (char*)&a;
	return *p;
	//����1,С��
	//����0�����
}
int main()
{
	//��⵱ǰ�������ֽ���
	int ret = check_sys();
	if (ret = 1)
		printf("���\n");
	else
		printf("С��\n");
	return 0;
}