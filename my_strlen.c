#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
//������
int my_strlen1(char *str)
{
	assert(str != NULL);
	int count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return count;
}
//����
int my_strlen2(char* str)
{
	if (*str == '\0')
	{
		return 0;
	}

	return 1 + my_strlen2(str + 1);
}
//ָ��-ָ��
int my_strlen3(char* str)
{
	char* p = str;
	while (*p != '\0')
	{
		p++;
	}
	return p - str;
}
int main()
{
	char arr[] = "abcdef";
	int ret = my_strlen3(arr);
	printf("%d\n", ret);
	return 0;
}