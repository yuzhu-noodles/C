#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
 
//�����������1�ĸ���
//���ַ���

//int count_bit_one(int num)  //  ���ò�����
//{
	//int count = 0;
	//for(int i = 0;i<32;i++)
	//{
	//	if (((num >> i) & 1) == 1)
	//	{
	//		count++;
	//	}
	//}
	//return count;
//}

int count_bit_one(unsigned int num)    //ת�����޷������ͣ�intֻ������������
{
	int count = 0;
	while (num)
	{
		if (num % 2 == 1)
		{
			count++;
		}
		num = num / 2;
	}
	return count;
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	int count = count_bit_one(a);
	printf("count = %d\n", count);
	return 0;
}