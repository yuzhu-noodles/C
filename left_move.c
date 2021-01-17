#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//暴力求解法
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
//三部翻转法
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
	reverse(arr, arr + n - 1); //逆序左边
	reverse(arr + n, arr + len - 1);  //逆序右边
	reverse(arr, arr + len - 1);    //逆序全部
}
int main()
{
	char arr[] = "abcdef";
	/*left_move1(arr, 1);*/
	left_move2(arr, 4);
	printf("%s\n", arr);
	return 0;
}