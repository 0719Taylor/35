#define _CRT_SECURE_NO_WARNINGS 1



#include <stdio.h>

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	//ָ������
//	//int* arr[10];
//	//����ָ��
//	//int* (*pa)[10] = &arr;
//	//����ָ��
//	int (*pAdd)(int,int)=Add;//&Add
//	//int sum = (*pAdd)(1, 2);
//	//int sum = pAdd(1, 2);;
//	//printf("sum=%d\n", sum);
//	//����ָ������
//	int (*pArr[5])(int, int);
//	//ָ����ָ�������ָ��
//	int (*(*pppArr)[5])(int, int) =&pArr;
//	return 0;
//}







//ð������
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)   //������
//	{
//		//һ��ð������
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)    //���ٶԽ��бȽ�
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//
//		}
//	}
//}

//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}

//struct Stu
//{
//	char name[20];
//	int age;
//};
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	struct Stu s[3] = { {"����",20},{"����",30},{"����",10} };
//	bubble_sort(arr, sz);//ȱ��,ֻ������������ ����ͨ��
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}






//qsort����
//void qsort(void* base, size_t num, size_t width, int (*cmp)(const void* e1,const void* e2));
#include <stdlib.h>
#include <string.h>

//int cpm_int(const void* e1, const void* e2)
//{
//	//�Ƚ���������ֵ��
//	return *(int*)e1 - *(int*)e2;
//}
//void test1()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cpm_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int cmp_float(const void* e1, const void* e2)
//{
//	if (*(float*)e1 == *(float*)e2)
//		return 0;
//	else if (*(float*)e1 > *(float*)e2)
//		return 1;
//	else
//		return -1;
//}
//void test2()
//{
//	float f[] = { 9.0,8.0,7.0,6.0,5.0,4.0 };
//	int sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]), cmp_float);
//	int j = 0;
//	for (j = 0; j < sz; j++)
//	{
//		printf("%f ",f[j]);
//	}
//}


//struct Stu
//{
//	char name[20];
//	int age;
//};
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	//�Ƚ����־��ǱȽ��ַ���
//	//�ַ����Ƚϲ���֮���ô���С�ڵ������Ƚ�,Ӧ����strcmp�������бȽ�   strcmp��������������,ǰ�ߴ��ں��߷���1 ���ڷ���0 С��- -1
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//void test3()
//{
//	struct Stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//	//��һ���������������������Ԫ�ص�ַ
//	//�ڶ��������������������Ԫ�ظ���
//	//�����������������������ÿ��Ԫ�صĴ�С����λ���ֽڣ�
//	//���ĸ�����������ָ��,�Ƚ�����Ԫ�ص����ú����ĵ�ַ - �������ʹ�����Լ�ʵ��
//	//            ����ָ����������������Ƚϵ�����Ԫ�صĵ�ַ
//}
//
////ʵ��bubble_sort�����ĳ���Ա,���Ƿ�֪��δ��������������� -- ��֪��
////�ǳ���ԱҲ��֪�����Ƚϵ�����Ԫ�ص�����
//void Swap(char* buf1, char* buf2,int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//void bubble_sort(void* base, int sz, int width,int (*cmp)(void* e1,void* e2))
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//ÿһ�˱ȽϵĶ���
//		int j = 0;
//		for (j = 0; j <sz-1-i; j++)
//		{
//			//����Ԫ�صıȽ�
//			if (cmp((char*)base+j*width,(char*)base+(j+1)*width) > 0)
//			{
//				//����
//				Swap((char*)base + j * width, (char*)base + (j + 1)*width,width);
//			}
//		}
//	}
//}
// int cpm_int(const void* e1, const void* e2)
//{
//	//�Ƚ���������ֵ��
//	return *(int*)e1 - *(int*)e2;
//}
//void test4()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//ʹ��bubble_sort�ĳ���Աһ��֪���Լ��������ʲô����
//	//��Ӧ��֪����αȽϴ����������е�Ԫ��
//	bubble_sort(arr,sz,sizeof(arr[0]), cpm_int);
//}
//
//void test5()
//{
//	struct Stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	//bubble_sort(s,sz,sizeof(s[0]),cmp_stu_by_age);
//	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//}
//
//int main()
//{
//	//test1();
//	//test2();
//	//test3();
//	//test4();
//	test5();
//	return 0;
// }











//void *����ָ��
//1.���Խ����������͵ĵ�ַ
//2.���ܽ��н����ò���
//3.���ܽ���+ - �����Ĳ���
//int main()
//{
//	int a = 10;
//	void* p = &a;
//	//*p = 0;   // error
//	//p++;    //error
//	return 0;
//}















int main(void)
{
	//����������Ԫ�ص�ַ,��������������
	// 1.sizeof(������) - ��������ʾ��������
	// 2.&������ - ��������ʾ��������
	//һά����
	//int a[] = { 1,2,3,4 };
	//printf("%d\n", sizeof(a));   // 16   sizeof(������) - ������������ܴ�С - ��Ԫ���ֽ�
	//printf("%d\n", sizeof(a + 0));//4/8    �����a����Ԫ�ص�ַ,a+0������Ԫ�صĵ�ַ
	//printf("%d\n", sizeof(*a));//4        *a - ��Ԫ��
	//printf("%d\n", sizeof(a + 1));//4/8    �����a����Ԫ�ص�ַ,a+1�ǵڶ���Ԫ�صĵ�ַ
	//printf("%d\n", sizeof(a[1]));//4
	//printf("%d\n", sizeof(&a));//4/8   &aȡ����������ĵ�ַ
	//printf("%d\n", sizeof(*&a));//16  
	//printf("%d\n", sizeof(&a + 1));//4/8   &a��&a+1֮��������һ������  &a+1����һ����ַ
	//printf("%d\n", sizeof(&a[0]));//4/8       ��һ��Ԫ�صĵ�ַ
	//printf("%d\n", sizeof(&a[0] + 1));//4/8   �ڶ���Ԫ�صĵ�ַ
	
	//�ַ�����
	char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", strlen(arr));  //���ֵ
	printf("%d\n", strlen(arr + 0)); //���ֵ
//	printf("%d\n", strlen(*arr)); //error  ���ﴫ��ȥ����'a'�������ASCIIֵ97 Ȼ����97Ϊ��ַ�����ڴ�  ��������
//	printf("%d\n", strlen(arr[1]));//error
	printf("%d\n", strlen(&arr));//���ֵ
	printf("%d\n", strlen(&arr + 1));//���ֵ-6
	printf("%d\n", strlen(&arr[0] + 1));//���ֵ-1


	//printf("%d\n", sizeof(arr));//6
	//printf("%d\n", sizeof(arr + 0));// 4/8
	//printf("%d\n", sizeof(*arr));//1
	//printf("%d\n", sizeof(arr[1]));//1
	//printf("%d\n", sizeof(&arr));// 4/8
	//printf("%d\n", sizeof(&arr + 1));// 4/8
	//printf("%d\n", sizeof(&arr[0] + 1)); //4/8
	return 0;
}