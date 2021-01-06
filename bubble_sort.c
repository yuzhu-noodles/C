#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//����qsort,дһ��bubble_sort
void Swap(char*buf1,char*buf2,int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}
void bubble_sort(void* base,int sz,int width,int(*cmp)(const void*,const void*))
{
	int i = 0;
	//����
	for (i = 0; i < sz - 1; i++)
	{
		//ÿһ�˱ȽϵĶ���
		int j = 0;
		for (int j = 0; j < sz - 1 - i; j++)
		{
			//����Ԫ�رȽ�
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				//����
				Swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
			}
		}
	}
}
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
void test1()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//ʹ��bubble_sort�ĳ���Աһ��֪���Լ��������ʲô����
	//��Ӧ��֪����αȽϴ����������е�Ԫ��
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (int i = 0; i < sz; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
//�ȽϽṹ��
struct Person
{
	char name[20];
	int age;
};
int cmp_struct_by_age(const void* e1, const void* e2)
{
	return ((struct Person*)e1)->age - ((struct Person*)e2)->age;
}
int cmp_struct_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct Person*)e1)->name, ((struct Person*)e2)->name);
}
void test2()
{
	struct Person p[4] = { {"zhanhsan",20},{"lisi",25},{"wangwu",10},{"haha",30} };
	int sz = sizeof(p) / sizeof(p[0]);
	bubble_sort(p, sz, sizeof(p[0]), cmp_struct_by_age);
	printf("������������\n");
	for (int i = 0; i < sz; i++)
		printf("������%s ���䣺%d  ", p[i].name, p[i].age);
	printf("\n");
	bubble_sort(p, sz, sizeof(p[0]), cmp_struct_by_name);
	printf("������������\n");
	for (int i = 0; i < sz; i++)
		printf("������%s ���䣺%d  ", p[i].name, p[i].age);
	printf("\n");
}
int main()
{
	test1();
	test2();
	return 0;
}