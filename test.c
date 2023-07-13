#define _CRT_SECURE_NO_WARNINGS 1



#include <stdio.h>

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	//指针数组
//	//int* arr[10];
//	//数组指针
//	//int* (*pa)[10] = &arr;
//	//函数指针
//	int (*pAdd)(int,int)=Add;//&Add
//	//int sum = (*pAdd)(1, 2);
//	//int sum = pAdd(1, 2);;
//	//printf("sum=%d\n", sum);
//	//函数指针数组
//	int (*pArr[5])(int, int);
//	//指向函数指针数组的指针
//	int (*(*pppArr)[5])(int, int) =&pArr;
//	return 0;
//}







//冒泡排序
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)   //多少趟
//	{
//		//一趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)    //多少对进行比较
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
//	struct Stu s[3] = { {"张三",20},{"李四",30},{"王五",10} };
//	bubble_sort(arr, sz);//缺陷,只能排整型数组 不够通用
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}






//qsort函数
//void qsort(void* base, size_t num, size_t width, int (*cmp)(const void* e1,const void* e2));
#include <stdlib.h>
#include <string.h>

//int cpm_int(const void* e1, const void* e2)
//{
//	//比较两个整型值的
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
//	//比较名字就是比较字符串
//	//字符串比较不能之间用大于小于等于来比较,应该用strcmp函数进行比较   strcmp函数有两个参数,前者大于后者返回1 等于返回0 小于- -1
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//void test3()
//{
//	struct Stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//	//第一个参数：待排序数组的首元素地址
//	//第二个参数：待排序数组的元素个数
//	//第三个参数：待排序数组的每个元素的大小（单位是字节）
//	//第四个参数：函数指针,比较两个元素的所用函数的地址 - 这个函数使用者自己实现
//	//            函数指针的两个参数：待比较的两个元素的地址
//}
//
////实现bubble_sort函数的程序员,他是否知道未来排序的数据类型 -- 不知道
////那程序员也不知道待比较的两个元素的类型
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
//		//每一趟比较的对数
//		int j = 0;
//		for (j = 0; j <sz-1-i; j++)
//		{
//			//两个元素的比较
//			if (cmp((char*)base+j*width,(char*)base+(j+1)*width) > 0)
//			{
//				//交换
//				Swap((char*)base + j * width, (char*)base + (j + 1)*width,width);
//			}
//		}
//	}
//}
// int cpm_int(const void* e1, const void* e2)
//{
//	//比较两个整型值的
//	return *(int*)e1 - *(int*)e2;
//}
//void test4()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//使用bubble_sort的程序员一定知道自己排序的是什么数据
//	//就应该知道如何比较待排序数组中的元素
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











//void *类型指针
//1.可以接收任意类型的地址
//2.不能进行解引用操作
//3.不能进行+ - 整数的操作
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
	//数组名是首元素地址,但是有两个意外
	// 1.sizeof(数组名) - 数组名表示整个数组
	// 2.&数组名 - 数组名表示整个数组
	//一维数组
	//int a[] = { 1,2,3,4 };
	//printf("%d\n", sizeof(a));   // 16   sizeof(数组名) - 计算的是数组总大小 - 单元是字节
	//printf("%d\n", sizeof(a + 0));//4/8    这里的a是首元素地址,a+0还是首元素的地址
	//printf("%d\n", sizeof(*a));//4        *a - 首元素
	//printf("%d\n", sizeof(a + 1));//4/8    这里的a是首元素地址,a+1是第二个元素的地址
	//printf("%d\n", sizeof(a[1]));//4
	//printf("%d\n", sizeof(&a));//4/8   &a取出的是数组的地址
	//printf("%d\n", sizeof(*&a));//16  
	//printf("%d\n", sizeof(&a + 1));//4/8   &a和&a+1之间跳过了一个数组  &a+1还是一个地址
	//printf("%d\n", sizeof(&a[0]));//4/8       第一个元素的地址
	//printf("%d\n", sizeof(&a[0] + 1));//4/8   第二个元素的地址
	
	//字符数组
	char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", strlen(arr));  //随机值
	printf("%d\n", strlen(arr + 0)); //随机值
//	printf("%d\n", strlen(*arr)); //error  这里传过去的是'a'所代表的ASCII值97 然后以97为地址访问内存  程序会崩溃
//	printf("%d\n", strlen(arr[1]));//error
	printf("%d\n", strlen(&arr));//随机值
	printf("%d\n", strlen(&arr + 1));//随机值-6
	printf("%d\n", strlen(&arr[0] + 1));//随机值-1


	//printf("%d\n", sizeof(arr));//6
	//printf("%d\n", sizeof(arr + 0));// 4/8
	//printf("%d\n", sizeof(*arr));//1
	//printf("%d\n", sizeof(arr[1]));//1
	//printf("%d\n", sizeof(&arr));// 4/8
	//printf("%d\n", sizeof(&arr + 1));// 4/8
	//printf("%d\n", sizeof(&arr[0] + 1)); //4/8
	return 0;
}