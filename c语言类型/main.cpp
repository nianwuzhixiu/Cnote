#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//int check_sys()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//		return 1;
//
//	else
//		return 0;
//}

//int check_sys()			//
//{
//	int a = 1;
//	//char* p = (char*)&a;
//	//return *p;
//	return (* (char*)&a);
//}
//int main()
//{
//	/*int a = 10;
//	int b = -20;*/
//	//float f = 10.0;
//	//1 - 1;//补码计算
//	//1+(-1)
//	//0000000000000000000000000000001
//	//1111111111111111111111111111111
//	//0000000000000000000000000000000
//	int ret = check_sys();					//判断存储类型是大端还是小端
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}

int main()//输出的是什么
{
	char a = -1;
	signed char b = -1;
	unsigned char c = -1;//存入的都是11111111  无符号数整型提升加的是0所以是000000....011111111
	printf("a=%d b=%d c=%d\n", a, b, c);
	char d = -128;
	//1000000000000000000000010000000
	//1111111111111111111111101111111
	//1111111111111111111111110000000补码
	//10000000
	//1111111111111111111111110000000		无符号整型提升
	printf("%u", d);//%d打印十进制有符号数据		%u十进制无符号
}