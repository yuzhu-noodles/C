#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//qsort函数的使用
//void qsort (void* base, size_t num, size_t size,int (*compar)(const void*, const void*));
             //（待排序数组，元素个数，元素字节大小，函数指针）
//1、int排序
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;    //void*不能直接解引用操作，要强制类型转换
}
void test1()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (int i = 0; i < sz; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
//2、folat
int cmp_float(const void* e1, const void* e2)
{
	if (*(float*)e1 == *(float*)e2)
	{
		return 0;
	}
	else if (*(float*)e1 < *(float*)e2)
	{
		return -1;
	}
	else
		return 1;
}
void test2()
{
	float f[] = { 9.0,8.0,7.0,6.0,5.0,4.0,3.0,2.0,1.0 };
	int sz = sizeof(f) / sizeof(f[0]);
	qsort(f, sz, sizeof(f[0]), cmp_float);
	int i = 0;
	for (int i = 0; i < sz; i++)
		printf("%f ", f[i]);
	printf("\n");
}

//struct
struct Person
{
	char name[20];
	int age;
};
int cmp_struct_by_age(const void*e1,const void*e2)
{
	return ((struct Person*)e1)->age - ((struct Person*)e2)->age;
}
int cmp_struct_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct Person*)e1)->name, ((struct Person*)e2)->name);
}
void test3()
{
	struct Person p[4] = { {"zhanhsan",20},{"lisi",25},{"wangwu",10},{"haha",30} };
	int sz = sizeof(p) / sizeof(p[0]);
	qsort(p, sz,sizeof(p[0]), cmp_struct_by_age);
	printf("按照年龄排序：\n");
	for (int i = 0; i < sz; i++)
		printf("姓名：%s 年龄：%d  ", p[i].name,p[i].age);
	printf("\n");
	qsort(p, sz, sizeof(p[0]), cmp_struct_by_name);
	printf("按照姓名排序：\n");
	for (int i = 0; i < sz; i++)
		printf("姓名：%s 年龄：%d  ", p[i].name, p[i].age);
	printf("\n");
}
int main()
{
	test1();
	test2();
	test3();
}