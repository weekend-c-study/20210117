//������ ������ ���ڷ����޹޾Ƽ� 
//���߿� ���� ū���� �����ϴ� �Լ�
//���߿� ���� �������� ������ �Լ�
#include<stdio.h>

int maxNum(int a, int b, int c)
{
	
	if (a > b) {
		//a��ū���
		if (a > c) {
			return a;
		}
		else {
			return c;
		}
	}
	else {
		//b�� ū��쳪 �������
		if (b > c)
			return b;
		else
			return c;
	}
	
}

int minNum(int a, int b, int c)
{

	if (a < b) {
		
		if (a < c) {
			return a;
		}
		else {
			return c;
		}
	}
	else {
		
		if (b < c)
			return b;
		else
			return c;
	}

}

int main()
{
	printf("���������� : %d\n", minNum(10, 5, 8));
	printf("���� ū�� : %d\n", maxNum(10, 5, 8));
	return 0;
}

/*
#include<stdio.h>
void dispChange(int a, int b);
void dispNum(int a, int b);
int main()
{
	int a=10, b=20;

	dispChange(a, b);
	dispNum(a, b);
	return 0;
}

void dispChange(int a, int b)
{	
	int temp = a;
	a = b;
	b = temp;
	dispNum(a, b);
}

void dispNum(int a, int b) {
	printf("a : %d, b : %d\n", a, b);
}
//*/
/*

#include<stdio.h>
double div(int a, int b);
int main() 
{
	printf("%.2f\n", div(2, 3));
	return 0;
}

double div(int a, int b)
{
	double result= (double)a / b;
	return result;
}

*/

/*
#include<stdio.h>

int absCompare(int n, int m);
int getAbs(int num);

int main()
{
	int n = 10, m=-100;
	//�μ��� ���밪�� ū����?
	printf("���밪�� ū�� : %d\n", absCompare(n, m) );
	return 0;
}

int absCompare(int n, int m) 
{
	if (getAbs(n) > getAbs(m))
		return n;
	else
		return m;

}


//���밪�� ����
int getAbs(int num)
{
	if (num < 0)
		return num * -1;
	else
		return num;
}
//*/
/*
#include<stdio.h>

int maxNum(int n, int m) 
{
	if (n > m)
		return n;
	else
		return m;
}

int main()
{
	int max = maxNum(10, 20);
	printf("%d\n", max);
	return 0;
}
*/

/*
//����Ÿ��(O) �Լ��̸�(�Ķ����(o))
//����Ÿ��(O) �Լ��̸�(�Ķ����(x))
//����Ÿ��(x) �Լ��̸�(�Ķ����(o))
//����Ÿ��(x) �Լ��̸�(�Ķ����(x))

#include<stdio.h>

int getNum() 
{
	int num;
	puts("���ڸ� �־��ּ���!");
	scanf_s("%d", &num);

	return num;
}

int main()
{
	int result = getNum();
	printf("%d\n", result);
	return 0;
}
//*/
/*
#include<stdio.h>
int sum(int a, int b) 
{
	int result = a + b;
	return result;
}
int minus(int a, int b) {
	return a - b;
}
int main()
{
	int result=sum(10, 20);
	printf("%d\n", result);

	printf("%d \n", minus(20, 5));
	return 0;
}
*/
/*
#include<stdio.h>

//���� �� ���� ����
void printNum(int num) {
	printf("num : %d\n", num);
}

void printSum(int a, int b) {
	printf("%d + %d = %d\n", a, b, a + b);
}

void minus(int a, int b) {
	printf("%d - %d = %d\n", a, b, a - b);
}

void multi(int a, int b) {
	printf("%d * %d = %d\n", a, b, a * b);
}

void div(int a, int b) {
	//��������� �Ҽ��� 2�ڸ����� ���
	printf("%d / %d = %.2f\n", a, b, a / (double)b );
}

int main()
{
	printNum(10);
	printNum(100);

	printSum(10, 20);
	printSum(100, 200);
	div(2, 3);
	return 0;
}
//*/
/*
#include<stdio.h>

//�Լ��� ���� : �����Ϸ����� �˷��ִ¿���
void display();

int main()
{
	//�Լ��� ȣ�� call
	for (int i = 0; i < 5; i++) {
		display();
	}
	
	return 0;
}

//�Լ��� ���� definition
//return ���� value�� ����.
void display() 
{
	printf("�ȳ��ϼ���!\n");
}
//*/

/*
#include<stdio.h>
int main()
{
	int arr[] = { 88,98,76,90,95 };
	int tot=0;
	               // 20 / 4 == 5
	int length = sizeof(arr) / sizeof(int);

	for (int i = 0; i < length; i++) 
	{
		//tot = tot + arr[i];
		tot += arr[i];
	}
	//�������
	printf("���� : %d\n", tot);
	//������
	printf("��� : %.2f\n", (double)tot / length);
	return 0;
}
*/

/*
#include<stdio.h>
int main()
{
	//arr[0] ~ arr[4]
	char arr[5];
	printf("%d %p\n", arr, arr);
	printf("%d %p\n", &arr[0], &arr[0]);
	printf("%d %p\n", &arr[1], &arr[1]);
	printf("%d %p\n", &arr[2], &arr[2]);
	printf("%d %p\n", &arr[3], &arr[3]);
	printf("%d %p\n", &arr[4], &arr[4]);

	//�迭�̸� : �迭������ ù��° �޸� �ּҹ���!

	scanf_s("%s", arr, sizeof(arr));
	// �迭�� scanf_s �Է�ó����  &�� ������ �ʾƵ� �ȴ�.

	

	return 0;
}
//*/

/*
//#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char str[10] = {0};

	printf("���ڿ� �Է��ϼ���!\n");

	//scanf("%s", str);//str[0]~str[99]
	scanf_s("%s", str, sizeof(str));
	//���ڰ��� �Է��� �� �ִ��Է»����� ������ �������� �־�����մϴ�.
	//�Է����� : �Էµ� ���ڿ�+'\0' : �������� �ι��ڸ� �ڵ�����

	printf("�Է¹��� ���ڿ� : %s\n", str);

	int i = 0;
	while (str[i] != '\0') {
		printf("%c , %d\n", str[i], str[i]);
		i++;
	}


	return 0;
}
*/

/*
#include<stdio.h>

int main()
{
	//            0123456789012
	char str[] = "good morning!";


	printf("%d\n", sizeof(str));//14
	//���ڿ��� Ư¡
	// "���ڿ�ǥ��"  �ֵ���ǥ���
	//���ڿ��� �޸� ����� �������� Ư�������� null����('\0')�� �־���Ѵ�
	// 'g' 'o'~~~'!' '\0'


	for (int i = 0; i < 14; i++) {
		printf("arr[%d] : %c , %d\n", i, str[i], str[i]);
	}
	printf("------\n");
	puts(str);
	printf("%s\n", str);

	// '\0' == 0 : �������� ��½ÿ��� ����� �߻����� �ʴ´�.
	str[8] = '\0';
	printf("------\n");
	printf("%s\n", str);
	return 0;
}
*/

/*
#include<stdio.h>
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};

	printf("%d\n", sizeof(arr)/sizeof(int));
	//�迭�� ���� ���
	int length = sizeof(arr) / sizeof(int);

	for (int i = 0; i < length ; i++) {
		printf("%d ", arr[i]);
	}
	puts("\n------");
	for (int i = 0; i < length ; i++) {
		printf("%d \n", arr[i]);
	}

	return 0;
}
*/

/*
#include<stdio.h>
int main()
{
	for (int i = 1; i <= 9; i++) {//������
		for (int j = 2; j <= 9; j++) {//��ȭ��
			printf("%d*%d=%2d  ", j, i, i * j);
		}
		printf("\n");
	}
	return 0;
}
//*/
/*
#include<stdio.h>

int main()
{
	//arr[0] = 1, arr[1] = 2, arr[2] = 3, arr[3] = 4, arr[4] = 5;
	int arr[5] = {1,2,3,4,5};
	
	//����� ���� �ʱ�ȭ�Ҷ� ����� ���� ǥ������ �ʾƵ� �˴ϴ�.
	int arr2[] = { 1,2,3,4,5 };

	//����� ���� �ʱ�ȭ�� ������� ���� �������ʱ�ȭó���� ������ 0���� �ʱ�ȭ�ȴ�.
	int arr3[5] = { 1,2,3 };

	//printf("%d \n", arr3[0]);
	//printf("%d \n", arr3[1]);
	//printf("%d \n", arr3[2]);
	//printf("%d \n", arr3[3]);
	//printf("%d \n", arr3[4]);

	//�迭�� ����Ҵ� �ݺ����� �̿��ؼ� ���������� ������ �����ϴ�
	for (int i = 0; i < 5; i++) 
	{
		printf("%d \n", arr3[i]);
	}



	return 0;
}
*/

/*
#include<stdio.h>
int main() 
{
	int a,b,c;
	double salary[100];//salary[0]~ salary[99]
	int arr[3];
	int math[50];
	//�迭�� ����
	//������Ÿ�� �迭�̸�[������]
	//������ũ���� �����͸� ������ ������ش�.
	//�޸𸮻󿡼� ���������� �Ҵ�˴ϴ�.
	//�迭 ������ �ڵ����� ������ݴϴ�.
	//�迭�̸�[�ε�����ȣ] : �ε�����ȣ�� 0 ~
	//arr[0], arr[1], arr[2]
	arr[0] = 10;
	arr[1] = 100;
	arr[2] = 1000;

	printf("arr[0] : %d\n", arr[0]);
	printf("arr[1] : %d\n", arr[1]);
	printf("arr[2] : %d\n", arr[2]);
	return 0;
}
*/