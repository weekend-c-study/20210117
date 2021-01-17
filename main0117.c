//세개의 정수를 인자로전달받아서 
//그중에 제일 큰수를 리턴하는 함수
//그중에 제일 작은수를 리턴하 함수
#include<stdio.h>

int maxNum(int a, int b, int c)
{
	
	if (a > b) {
		//a가큰경우
		if (a > c) {
			return a;
		}
		else {
			return c;
		}
	}
	else {
		//b가 큰경우나 같은경우
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
	printf("제일작은수 : %d\n", minNum(10, 5, 8));
	printf("제일 큰수 : %d\n", maxNum(10, 5, 8));
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
	//두수의 절대값이 큰값은?
	printf("절대값이 큰수 : %d\n", absCompare(n, m) );
	return 0;
}

int absCompare(int n, int m) 
{
	if (getAbs(n) > getAbs(m))
		return n;
	else
		return m;

}


//절대값을 리턴
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
//리턴타입(O) 함수이름(파라미터(o))
//리턴타입(O) 함수이름(파라미터(x))
//리턴타입(x) 함수이름(파라미터(o))
//리턴타입(x) 함수이름(파라미터(x))

#include<stdio.h>

int getNum() 
{
	int num;
	puts("숫자를 넣어주세요!");
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

//정의 와 동시 선언
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
	//나눗셈출력 소숫점 2자리까지 출력
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

//함수의 선언 : 컴파일러한테 알려주는역할
void display();

int main()
{
	//함수의 호출 call
	for (int i = 0; i < 5; i++) {
		display();
	}
	
	return 0;
}

//함수의 정의 definition
//return 뒤의 value가 없다.
void display() 
{
	printf("안녕하세요!\n");
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
	//총점출력
	printf("총점 : %d\n", tot);
	//평균출력
	printf("평균 : %.2f\n", (double)tot / length);
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

	//배열이름 : 배열집합의 첫번째 메모리 주소번지!

	scanf_s("%s", arr, sizeof(arr));
	// 배열은 scanf_s 입력처리시  &를 붙이지 않아도 된다.

	

	return 0;
}
//*/

/*
//#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char str[10] = {0};

	printf("문자열 입력하세요!\n");

	//scanf("%s", str);//str[0]~str[99]
	scanf_s("%s", str, sizeof(str));
	//문자관련 입력은 꼭 최대입력사이즈 정보를 마지막에 넣어줘야합니다.
	//입력형태 : 입력된 문자열+'\0' : 마지막에 널문자를 자동저장

	printf("입력받은 문자열 : %s\n", str);

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
	//문자열의 특징
	// "문자열표현"  쌍따옴표사용
	//문자열은 메모리 저장시 마지막에 특수문자인 null문자('\0')가 있어야한다
	// 'g' 'o'~~~'!' '\0'


	for (int i = 0; i < 14; i++) {
		printf("arr[%d] : %c , %d\n", i, str[i], str[i]);
	}
	printf("------\n");
	puts(str);
	printf("%s\n", str);

	// '\0' == 0 : 문자형태 출력시에는 출력이 발생하지 않는다.
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
	//배열의 길이 계산
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
	for (int i = 1; i <= 9; i++) {//고정값
		for (int j = 2; j <= 9; j++) {//변화값
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
	
	//선언과 동시 초기화할때 사이즈를 따로 표현하지 않아도 됩니다.
	int arr2[] = { 1,2,3,4,5 };

	//선언과 동시 초기화때 사이즈보다 작은 데이터초기화처리시 나머지 0으로 초기화된다.
	int arr3[5] = { 1,2,3 };

	//printf("%d \n", arr3[0]);
	//printf("%d \n", arr3[1]);
	//printf("%d \n", arr3[2]);
	//printf("%d \n", arr3[3]);
	//printf("%d \n", arr3[4]);

	//배열의 모든요소는 반복문을 이용해서 순차적으로 접근이 가능하다
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
	//배열의 선언
	//데이터타입 배열이름[사이즈]
	//동일한크기의 데이터를 여러개 만들어준다.
	//메모리상에서 연속적으로 할당됩니다.
	//배열 변수를 자동으로 만들어줍니다.
	//배열이름[인덱스번호] : 인덱스번호는 0 ~
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