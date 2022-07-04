#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


//转义字符
//int main()
//{
//	//printf("abc\n");//  \n - 也是转义字符
//	//printf("C:\\test");// \t - 水平制表符 要再加\才能显示\test
//	/*printf("%c\n", '\'');*/
//
//	return 0;
//}
////
//int main()
//{
//
//
//	printf("%d\n",strlen("c:\\test\32\\test.c"));
//	// \32 --32是2个8进制数字 8进制01234567
//	// \32作为8进制代表的转十进制，作为ASCII码值，对应的字符
//	// 32 -- > 10进制 26 -> 作为ASCII码值
//	printf("%d\n", '\x13');// \x13  16进制转10进制
//	return 0;
//}
//int main()
//{
//	int input = 0;
//	printf("(1/0):");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("8848");
//	else
//		printf("2333");
//	return 0;
//}
//
//int main()
//{
//	int line = 0;
//	printf("8848\n" );
//	while (line<20000)
//	{
//     printf("23333\n");
//     line++;
//
//	}
//	if (line>=20000)
//	{
//    printf("asd");
//	}
//	
//
//	return 0;
//}

//int Add(int x, int y) //定义函数
//{
//	int z = x + y;
//	return z;
//
//}
//
//int main()
//{
//	int a = 10;
//	int b = 9;
//	int sum = 0;
//	sum = Add(a, b);//把a的值赋值给x ，把b的值赋值给b
//	sum = Add(1, 1);
//	printf("sum = %d\n", sum);
//	return 0;
//}

//循环结构
//int main()
//{
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//定义一个存放10个整型数字的数组
//	//        下标 0 1 2 3 4 5 6 7 8 9
//	/*printf("%d\n", arr[2]);*/
//	/*char ch[10];*/
//	
//	while (i<10)
//	{
//      printf("%d\n", arr[i]);
//	  i++;
//	}
//
//	return 0;
//}

//取模
//int main()
//{
//	int a = 5 % 2; //取模 得余数1
//	printf("%d\n", a);
//
//	return 0;
//}

// 左右移
//int main()
//{
//	//移（2进制）位操作符
//	// <<左移
//	// >>右移
//	int a = 1;
//	//整型1占4个字节-32bite
//	//000000000000000000000000000001
//	int b =  a << 2;
//	//000000000000000000000000000100
//	printf("%d\n", b);
//	printf("%d\n", a);// a不变
//	return 0;
//}

//位操作
//int main()
//{
//	//(2进制)位操作
//	// & 按位与
//	// | 按位或
//	// ^ 按位异或
//
//	int a = 3;
//	int b = 5;
//	/*int c = a & b;*/
//	//int c = a | b;
//	int c = a ^ b;//异或 对应的二进制位相同为0，相异为1
//	//011
//	//101
//	//001 &
//	//111 |
//	//110 ^
//	printf("%d\n", c);
//	return 0;
//}

//赋值操作符
//int main()
//{
//	int a = 10;
//	a = 20;// = 赋值  == 判断相等
//	a = a + 10;
//	a += 10;
//	a = a - 10;
//	a -= 10;
//	a = a & 2;
//	a &= 2;
//	//复合赋值符
//	//+=  -=  /=  &=  >>=  <<= |= ^=
//	return 0;
//}

//单目操作符
//双目操作符
//三目操作符
//int main()
//{
//	int a = 10;
//	int b = -a;
//	int c = 3;
//	printf("%d\n", a);
//	printf("%d\n", !a);//逻辑反操作  真假互换 1 0
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };//十个整型元素的数组
//	int sz = 0;
//	printf("%d\n", sizeof(arr));
//	//计算数组的元素个数
//	// 个数 = 数组总数大小/每个元素的大小
//	sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//	//int a = 10;
//	//sizeof 计算的是变量/类型所占空间的大小，单位是字节
//	//printf("%d\n", sizeof(a));
//	//printf("%d\n", sizeof(int));
//	//printf("%d\n", sizeof a);//变量名可以省略括号
//	/*printf("%d\n", sizeof int);*///这是错的 只有变量名可以省略括号
//	return 0;
//}
//
