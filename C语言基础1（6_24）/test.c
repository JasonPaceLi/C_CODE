#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//��������
//int main()
//{
//	printf("%d\n", sizeof(char));//�ַ���������,1
//	printf("%d\n", sizeof(short));//������,2
//	printf("%d\n", sizeof(int));//����,4
//	printf("%d\n", sizeof(long));//������,4
//	printf("%d\n", sizeof(long long));//����������,8
//	printf("%d\n", sizeof(float));//�����ȸ�����,4
//	printf("%d\n", sizeof(double));//˫���ȸ�����,8
//
//	return 0;
//}
//������ô������ͣ���ʵ��Ϊ�˸��ӷḻ�ı�������еĸ���ֵ

//�����Ķ��������
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

//������ʹ��
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

//ȫ�ֱ�������
//���������������������
//int a = 0;
//int main()//������
//{
//	a = 3;
//	printf("a=%d\n", a);//�ֲ�������ȫ�ֱ�����ͻʱ��ȡ�ֲ�����
//	extern int g_val;//����ͬһ�����ļ�����Դ�ļ��¶����ȫ�ֱ���
//	printf("%d", g_val);
//
//	return 0;
//}

//�������ڣ������Ĵ���������֮���ʱ���
//�ֲ��������������ڣ�����������ʼ�������������
//ȫ�ֱ������������ڣ������������������
//int main()
//{
//	{
//		int a = 1;
//		printf("%d\n", a);
//	}
//	//printf("d\n", a);//������������Ч
//
//	return 0;
//}


//�ַ���
//#include <string.h>
//
//int main()
//{
//	//�ַ����� - ������һ����ͬ���͵�Ԫ��
//	//�ַ����ڽ�β��λ��������һ��\0���ַ�
//	//\0���ַ����Ľ�����־
//
//	//char arr[] = "hello";
//
//	char arr1[] = "abc";
//	char arr2[] = {'a', 'b', 'c'};
//
//	//��һ���ַ����ĳ���
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//
//	//int len = strlen("abc");//string length
//	//printf("%d\n", len);
//
//	//��ӡ�ַ���
//	//printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//
//	return 0;
//}

//ת���ַ�
//int main()
//{
//	//printf("%s", """); //�����ӡ˫���ű�����ȥ��
//	printf("%s", "\"");
//	printf("%c", '"');
//
//	//printf("%c", ''');
//	printf("%c", '\'');
//
//	int a = 0;
//	printf("%d\n", a);
//	printf("%d\\n", a);//ת���ַ�����б�� \\�������0\n
//	printf("\na%s", "b\tc");//ˮƽ�Ʊ��Tab
//	printf("\n%s", "D:\\test\\test.c");
//	printf("\n%s", "D:\\\test\\\test.c");
//
//	printf("\n%s", "d\r");
//	printf("\a");//�����ַ�������\a
//
//	printf("\n%c", '\130');//�˽���תΪ�����ƶ�Ӧ��ASCIIֵ
//	printf("\n%c", '\x30');//ʮ������תΪ�����ƶ�Ӧ��ASCIIֵ
//		
//	return 0;
//}

//ѡ�����
//int main()
//{
//	int input = 0;
//	printf("��Ҫ��������ѡ�񣺣�Ҫ1����Ҫ0��");
//	scanf("%d", &input);
//	if (input == 1) {
//		printf("����");
//	}
//	else {
//		printf("�����������");
//	}
//	return 0;
//}


//����
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

//����
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

