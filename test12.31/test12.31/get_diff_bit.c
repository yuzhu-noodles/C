#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//��������int�����ж����Ʊ��ʽ���ж��ٸ�λ��ͬ
int get_diff_bit(int a, int b)
{
	int tmp = a ^ b;
	int num = 0;
    for(int i = 0;i<32;i++)
    {
	    if (((tmp >> i) & 1) == 1)
	    {
		    num++;
	    }
    }
    return num;
}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d:", &a,&b);
	int count = get_diff_bit(a,b);
	printf("count = %d\n", count);
	return 0;
}