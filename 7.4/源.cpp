#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


//ת���ַ�
//int main()
//{
//	//printf("abc\n");//  \n - Ҳ��ת���ַ�
//	//printf("C:\\test");// \t - ˮƽ�Ʊ�� Ҫ�ټ�\������ʾ\test
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
//	// \32 --32��2��8�������� 8����01234567
//	// \32��Ϊ8���ƴ����תʮ���ƣ���ΪASCII��ֵ����Ӧ���ַ�
//	// 32 -- > 10���� 26 -> ��ΪASCII��ֵ
//	printf("%d\n", '\x13');// \x13  16����ת10����
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

//int Add(int x, int y) //���庯��
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
//	sum = Add(a, b);//��a��ֵ��ֵ��x ����b��ֵ��ֵ��b
//	sum = Add(1, 1);
//	printf("sum = %d\n", sum);
//	return 0;
//}

//ѭ���ṹ
//int main()
//{
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//����һ�����10���������ֵ�����
//	//        �±� 0 1 2 3 4 5 6 7 8 9
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

//ȡģ
//int main()
//{
//	int a = 5 % 2; //ȡģ ������1
//	printf("%d\n", a);
//
//	return 0;
//}

// ������
//int main()
//{
//	//�ƣ�2���ƣ�λ������
//	// <<����
//	// >>����
//	int a = 1;
//	//����1ռ4���ֽ�-32bite
//	//000000000000000000000000000001
//	int b =  a << 2;
//	//000000000000000000000000000100
//	printf("%d\n", b);
//	printf("%d\n", a);// a����
//	return 0;
//}

//λ����
//int main()
//{
//	//(2����)λ����
//	// & ��λ��
//	// | ��λ��
//	// ^ ��λ���
//
//	int a = 3;
//	int b = 5;
//	/*int c = a & b;*/
//	//int c = a | b;
//	int c = a ^ b;//��� ��Ӧ�Ķ�����λ��ͬΪ0������Ϊ1
//	//011
//	//101
//	//001 &
//	//111 |
//	//110 ^
//	printf("%d\n", c);
//	return 0;
//}

//��ֵ������
//int main()
//{
//	int a = 10;
//	a = 20;// = ��ֵ  == �ж����
//	a = a + 10;
//	a += 10;
//	a = a - 10;
//	a -= 10;
//	a = a & 2;
//	a &= 2;
//	//���ϸ�ֵ��
//	//+=  -=  /=  &=  >>=  <<= |= ^=
//	return 0;
//}

//��Ŀ������
//˫Ŀ������
//��Ŀ������
//int main()
//{
//	int a = 10;
//	int b = -a;
//	int c = 3;
//	printf("%d\n", a);
//	printf("%d\n", !a);//�߼�������  ��ٻ��� 1 0
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };//ʮ������Ԫ�ص�����
//	int sz = 0;
//	printf("%d\n", sizeof(arr));
//	//���������Ԫ�ظ���
//	// ���� = ����������С/ÿ��Ԫ�صĴ�С
//	sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//	//int a = 10;
//	//sizeof ������Ǳ���/������ռ�ռ�Ĵ�С����λ���ֽ�
//	//printf("%d\n", sizeof(a));
//	//printf("%d\n", sizeof(int));
//	//printf("%d\n", sizeof a);//����������ʡ������
//	/*printf("%d\n", sizeof int);*///���Ǵ�� ֻ�б���������ʡ������
//	return 0;
//}
//
