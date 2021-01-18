#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//方法一
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
void left_move(char* arr, int n)
{
	//abcdef
	//ba fedc
	//cdefab
	int len = strlen(arr);
	reverse(arr, arr + n - 1); //逆序左边
	reverse(arr + n, arr + len - 1);  //逆序右边
	reverse(arr, arr + len - 1);    //逆序全部
}
int is_left_move1(char* s1, char* s2)
{
	int i = 0;
	int len = strlen(s1);
	for (i = 0; i < len; i++)
	{
		left_move(s1,1);
		int ret = strcmp(s1, s2);
		if (ret == 0)
		{
			return 1;
		}
	}
	return 0;
}
//方法2
int is_left_move2(char* s1, char* s2)
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	if (len1 != len2)
		return 0;
	strncat(s1, s1, len1);
	char* ret = strstr(s1, s2);
	if (ret == NULL)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
int main()
{
	char arr1[30] = "abcdef";
	char arr2[] = "cdefab";
	int ret = is_left_move1(arr1, arr2);
	if (ret == 1)
	{
		printf("Yes\n");
	}
	else
	{
		printf("N0\n");
	}

	return 0;
}


