#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//数据类型
//int main()
//{
//	printf("%d\n", sizeof(char));//字符数据类型,1
//	printf("%d\n", sizeof(short));//短整型,2
//	printf("%d\n", sizeof(int));//整形,4
//	printf("%d\n", sizeof(long));//长整型,4
//	printf("%d\n", sizeof(long long));//更长的整形,8
//	printf("%d\n", sizeof(float));//单精度浮点数,4
//	printf("%d\n", sizeof(double));//双精度浮点数,8
//
//	return 0;
//}
//存在这么多的类型，其实是为了更加丰富的表达生活中的各种值

//变量的定义与输出
//int main()
//{
//	int age = 21;
//	float weight = 66.7;
//	double height = 1.81;
//
//	age = age + 1;
//
//	printf("%d\n", age);
//	printf("%f\n", weight);
//	printf("%lf\n", height);
//
//	return 0;
//}

//变量的使用
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int sum = 0;
//	scanf("%d %d", &a, &b);
//	sum = a + b;
//	printf("sum = %d", sum);
//	return 0;
//}

//全局变量调用
//变量的作用域和生命周期
//int a = 0;
//int main()//作用域
//{
//	a = 3;
//	printf("a=%d\n", a);//局部变量和全局变量冲突时，取局部变量
//	extern int g_val;//声明同一工程文件其它源文件下定义的全局变量
//	printf("%d", g_val);
//
//	return 0;
//}

//生命周期：变量的创建到销毁之间的时间段
//局部变量的生命周期：进入作用域开始，出作用域结束
//全局变量的生命周期：整个程序的生命周期
//int main()
//{
//	{
//		int a = 1;
//		printf("%d\n", a);
//	}
//	//printf("d\n", a);//出了作用域无效
//
//	return 0;
//}


//字符串
//#include <string.h>
//
//int main()
//{
//	//字符数组 - 数组是一组形同类型的元素
//	//字符串在结尾的位置隐藏了一个\0的字符
//	//\0是字符串的结束标志
//
//	//char arr[] = "hello";
//
//	char arr1[] = "abc";
//	char arr2[] = {'a', 'b', 'c'};
//
//	//求一下字符串的长度
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//
//	//int len = strlen("abc");//string length
//	//printf("%d\n", len);
//
//	//打印字符串
//	//printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//
//	return 0;
//}

//转义字符
//int main()
//{
//	//printf("%s", """); //欲想打印双引号被挤出去了
//	printf("%s", "\"");
//	printf("%c", '"');
//
//	//printf("%c", ''');
//	printf("%c", '\'');
//
//	int a = 0;
//	printf("%d\n", a);
//	printf("%d\\n", a);//转义字符：反斜杠 \\，输出：0\n
//	printf("\na%s", "b\tc");//水平制表符Tab
//	printf("\n%s", "D:\\test\\test.c");
//	printf("\n%s", "D:\\\test\\\test.c");
//
//	printf("\n%s", "d\r");
//	printf("\a");//警告字符，蜂鸣\a
//
//	printf("\n%c", '\130');//八进制转为二进制对应的ASCII值
//	printf("\n%c", '\x30');//十六进制转为二进制对应的ASCII值
//		
//	return 0;
//}

//选择语句
//int main()
//{
//	int input = 0;
//	printf("你要考研吗？请选择：（要1，不要0）");
//	scanf("%d", &input);
//	if (input == 1) {
//		printf("加油");
//	}
//	else {
//		printf("做好你该做的");
//	}
//	return 0;
//}


//函数
//int add(int a, int b)
//{
//	int z = 0;
//	z = a + b;
//	return z;
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//	int sum = add(num1, num2);
//	printf("sum = %d", sum);
//	return 0;
//}

//数组
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	/*char ch[5] = { 'a', 'b', 'c' };*/
//	return 0;
//}

