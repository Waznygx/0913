#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
////素数
//#include<math.h>
//int main()
//{
//	int n;
//	printf("input:");
//	scanf("%d", &n); 
//	int i = 0;
//	for (i = 2; i <= sqrt(n); i++)
//	{
//		if (n % i == 0)
//		{
//			printf("%d is not a prime",n);
//			break;
//		}
//	}
//	if (i > sqrt(n))
//	{
//		printf("%d is a prime",n);
//	}
//	return 0;
//}

//struct S
//{
//	char c;
//	int i;
//}*p;
//struct B
//{
//	double d;
//	struct S a;
//};
//int main()
//{
//	struct S s = { 'w',3};
//	struct B b = { 3.14,'A',32 };
//	//printf("%lf,%c,%d", b.d,b.a.c,b.a.i);
//	p = &s;
//	printf("%c,%d", p->c,p->i);
//	return 0;
//}

//struct s1
//{
//	char c1;
//	int i;
//	char c2;
//};
//struct s2
//{
//	char c1;
//	char c2;
//	int i;
//};
//struct s3
//{
//	double d;
//	char c;
//	int i;
//};
//struct s4
//{
//	char c1;
//	struct s3 ss3;
//	double d;
//};
//int main()
//{
//	printf("s1=%d\n", sizeof(struct s1));
//	printf("s2=%d\n", sizeof(struct s2));
//	printf("s3=%d\n", sizeof(struct s3));
//	printf("s4=%d\n", sizeof(struct s4));
//	return 0;
//}

//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//	return 0;
//}

//enum Color
//{
//	red=3,
//	orange=8,
//	yellow=2
//};
//int main()
//{
//	enum Color c = yellow;
//	printf("%d\n", red);
//	printf("%d\n", orange);
//	printf("%d\n", yellow);
//	return 0;
//}

//union un
//{
//	//double d;
//	int i;
//	short s;
//	char c;
//};
//int main()
//{
//	union un u;
//	printf("%d", sizeof(u));
//	return 0;
//}

////机器内存大端/小端存储判断
//int check()
//{
//	//方法二
//	union MyUnion
//	{
//		int i;
//		char c;
//	}u;
//	u.i = 1;
//	return u.c;
//	////方法一
//	/*int num = 1;
//	if (*((char*)&num) == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}*/
//}
//int main()
//{
//	int ret = check();
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

union MyUnion
{
	int i;
	//char c;
	char c[5];
}un;
union MyUni
{
	int i;
	short c[7];
}un2;
int main()
{
	//un.i = 0x11223344;
	//un.c = 0x55;
	//printf("%x\n", un.i);
	printf("%d\n", sizeof(un));
	printf("%d\n", sizeof(un2));

	return 0;
}