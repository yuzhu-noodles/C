#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//������ⷨ
void left_move1(char* arr, int n)
{
	int i = 0;
	int len = strlen(arr);
	for (int i = 0; i < n; i++)
	{
		int j = 0;
		char tmp = *arr;
		for(j = 0;j<len-1;j++)
		{
			*(arr + j) = *(arr + j + 1);
		}
		*(arr + len - 1) = tmp;
	}
}
//������ת��
void reverse(char* start, char* end)
{
	while (start < end)
	{
		char tmp = *start;
		*start = *end;
		*end = tmp;
		start++, end--;
	}
}
void left_move2(char* arr, int n)
{
	//abcdef
	//ba fedc
	//cdefab
	int len = strlen(arr);
	reverse(arr, arr + n - 1); //�������
	reverse(arr + n, arr + len - 1);  //�����ұ�
	reverse(arr, arr + len - 1);    //����ȫ��
}
int main()
{
	char arr[] = "abcdef";
	/*left_move1(arr, 1);*/
	left_move2(arr, 4);
	printf("%s\n", arr);
	return 0;
}