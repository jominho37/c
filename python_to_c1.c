// 파이썬을 배울 때, 풀었던 문제나 과제를 c언어로 다시 풀어보기
// 두 변수 a, b를 선언하고 값을 각각 15, 4로 초기화하여 a+b, a-b, a/b, a/b의 몫, a/b의 나머지를 출력하기
#include <stdio.h>

int main()
{
	int a=15, b=4;
	float c = 15, d = 4;
	printf("a+b=%d\n", a + b);
	printf("a-b=%d\n", a - b);
	printf("a/b=%f\n", c/d);
	printf("a/b의 몫:%d\n",a / b);
	printf("a/b의 나머지:%d\n", a % b);

}