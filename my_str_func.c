#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>

//长度不受限制的字符串函数
//模拟strcpy
char* my_strcpy1(char* p1,const char* p2)
{
	assert(p1 != NULL);
	assert(p2 != NULL);
	char* ret = p1;
	while (*p2 != '\0')
	{
		*p1 = *p2;
		p1++;
		p2++;
	}
	*p1 = *p2;
	return ret;
}
char* my_strcpy2(char* p1, const char* p2)
{
	assert(p1 != NULL);
	assert(p2 != NULL);
	char* ret = p1;
	while (*p1++ = *p2++) //精简版
	{
		;
	}
	return ret;
}
//测试
void test1()
{
	char arr1[30] = "abcdef";
	char arr2[] = "abcdef";
	my_strcmp(arr1, arr2);
	printf("%s\n", arr1);
}
//模拟strcat
char* my_strcat(char* p1,const char *p2)
{
	assert(p1 != NULL);
	assert(p2 != NULL);
	char* ret = p1;
	while (*p1 != '\0')
	{
		p1++;
	}
	while (*p1++ = *p2++)
	{
		;
	}
	return ret;
}
void test2()
{
	char arr1[30] = "abcdef";
	char arr2[] = "hello";
	my_strcat(arr1, arr2);
	printf("%s\n", arr1);
}
//模拟strcmp
int my_strcmp(const char* p1, const char* p2)
{
	assert(p1 != NULL);
	assert(p2 != NULL);
	while (*p1 == *p2)
	{
		if (*p1 != '\0')
		{
			return 0;
		}
		p1++;
		p2++;
	}
	if (*p1 > * p2)
	{
		return 1;
	}
	else
	{
		return -1;
	}
	
}
//测试
void test3()
{
	char arr1[30] = "abcdef";
	char arr2[] = "bbcdef";
	int ret = my_strcmp(arr1, arr2);
	printf("%d\n", ret);
}
//长度受限制的字符串函数
//模拟strncpy
char* my_strncpy(char* p1,const char*p2,int n)
{
	assert(p1 != NULL);
	assert(p2 != NULL);
	char* ret = p1;
	while (n>0)
	{
		*p1++ = *p2++;
		n--;
	}
	return ret;
}
void test4()
{
	char arr1[30] = "abcdef";
	char arr2[] = "hahaha";
	my_strncpy(arr1, arr2,2);
	printf("%s\n", arr1);
}

//模拟strncat
char* my_strncat(char* p1, const char* p2, int n)
{
	assert(p1 != NULL);
	assert(p2 != NULL);
	char* ret = p1;
	while (*p1 != '\0')
	{
		p1++;
	}
	while (n--)
	{
		*p1++ = *p2++;
	}
	*p1 = '\0';
	return ret;
}
void test5()
{
	char arr1[30] = "abcdef";
	char arr2[6] = "hahaha";
	my_strncat(arr1, arr2, 5);
	printf("%s\n", arr1);
}
//模拟strncmp
int my_strncmp(const char* p1,const char* p2,int n)
{
	assert(p1 != NULL);
	assert(p2 != NULL);
	while (n--) 
	{
		if (*p1 == *p2) 
		{
			p1++;
			p2++;
		}
		else 
		{
			if (*p1 < *p2)
				return -1;
			else
				return 1;
		}
	}
	return 0;
}

void test6()
{
	char arr1[30] = "abcaef";
	char arr2[6] = "abcdef";
	int ret = my_strncmp(arr1, arr2, 5);
	printf("%d\n", ret);
}
int main()
{
	//test1();
	//test2();
	//test3();
	//test4();
	//test5();
	test6();
	return 0;
}