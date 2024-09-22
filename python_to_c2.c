//파이썬에서 배운 것 c로 구현해보기
//10개의 정수를 입력받아 양수, 음수, 0의 개수를 출력하기(for문 사용하지 않기)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x, plus = 0, minus = 0, zero = 0;
	printf("정수를 입력하시오. :");
	scanf("%d", &x);
	if (x > 0)
	{
		plus = plus + 1;
	}
	else if (x < 0)
	{
		minus = minus + 1;
	}
	else
	{
		zero = zero + 1;
	}
	printf("정수를 입력하시오. :");
	scanf("%d", &x);
	if (x > 0)
	{
		plus = plus + 1;
	}
	else if (x < 0)
	{
		minus = minus + 1;
	}
	else
	{
		zero = zero + 1;
	}
	printf("정수를 입력하시오. :");
	scanf("%d", &x);
	if (x > 0)
	{
		plus = plus + 1;
	}
	else if (x < 0)
	{
		minus = minus + 1;
	}
	else
	{
		zero = zero + 1;
	}
	printf("정수를 입력하시오. :");
	scanf("%d", &x);
	if (x > 0)
	{
		plus = plus + 1;
	}
	else if (x < 0)
	{
		minus = minus + 1;
	}
	else
	{
		zero = zero + 1;
	}
	printf("정수를 입력하시오. :");
	scanf("%d", &x);
	if (x > 0)
	{
		plus = plus + 1;
	}
	else if (x < 0)
	{
		minus = minus + 1;
	}
	else
	{
		zero = zero + 1;
	}
	printf("정수를 입력하시오. :");
	scanf("%d", &x);
	if (x > 0)
	{
		plus = plus + 1;
	}
	else if (x < 0)
	{
		minus = minus + 1;
	}
	else
	{
		zero = zero + 1;
	}
	printf("정수를 입력하시오. :");
	scanf("%d", &x);
	if (x > 0)
	{
		plus = plus + 1;
	}
	else if (x < 0)
	{
		minus = minus + 1;
	}
	else
	{
		zero = zero + 1;
	}
	printf("정수를 입력하시오. :");
	scanf("%d", &x);
	if (x > 0)
	{
		plus = plus + 1;
	}
	else if (x < 0)
	{
		minus = minus + 1;
	}
	else
	{
		zero = zero + 1;
	}
	printf("정수를 입력하시오. :");
	scanf("%d", &x);
	if (x > 0)
	{
		plus = plus + 1;
	}
	else if (x < 0)
	{
		minus = minus + 1;
	}
	else
	{
		zero = zero + 1;
	}
	printf("정수를 입력하시오. :");
	scanf("%d", &x);
	if (x > 0)
	{
		plus = plus + 1;
	}
	else if (x < 0)
	{
		minus = minus + 1;
	}
	else
	{
		zero = zero + 1;
	}
	printf("\n양수의 개수 : %d", plus);
	printf("\n음수의 개수 : %d", minus);
	printf("\n0의 개수 : %d", zero);
}
