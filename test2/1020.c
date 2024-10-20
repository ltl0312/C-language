#include<stdio.h>

//int main()
//{
//	long a = 0; int b = 10;
//	printf("%d\n", sizeof a+b);//sizeof是单目操作符
//	int arr[10] = { 0 };
//	printf("%d\n",sizeof(arr));//sizeof计算的是整个数组的大小，单位是字节
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));//10-数组的元素个数
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = a++;
//	//后置++，先使用，后++
//	//int b=a;a=a+1;
//	printf("%d\n%d\n", a, b);//10，11
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = ++a;
//	//前置++，先++，后使用
//	//a=a+1;int b=a；
//	printf("%d\n%d\n", a, b);//11，11
//	return 0;
//}



//强制类型转换
//int main()
//{
//	int a = (int)3.14;
//	//3.14字面浮点数，编译器默认为double类型
//	printf("%d\n", a);
//	return 0;
//}