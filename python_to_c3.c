//파이썬에서 배운 것 c로 구현해보기
//사용자로부터 10개의 정수를 입력받아 평균을 구하고, 양수들의 평균, 음수들의 평균을 구하시오. (반복문 for 사용)
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	float input;
//	float sum = 0;
//	float plus_sum = 0;
//	float plus_num = 0;
//	float minus_sum = 0;
//	float minus_num = 0;
//
//	for (int i = 0; i < 10; i++) {
//		printf("input integer number : ");
//		scanf("%f", &input);
//		sum = sum + input;
//		if (input > 0) {
//			plus_sum = plus_sum + input;
//			plus_num = plus_num + 1;
//		}
//		else if (input < 0) {
//			minus_sum = minus_sum + input;
//			minus_num = minus_num + 1;
//		}
//	}
//	printf("\ninteger average : %f", sum / 10);
//	if (plus_num > 0) {
//		printf("\nplus integer average : %f", plus_sum / plus_num);
//	}
//	else {
//		printf("\nplus integer is not exist");
//	}
//	if (minus_num > 0) {
//		printf("\nminus integer average : %f", minus_sum / minus_num);
//	}
//	else {
//		printf("\nminus integer is not exist");
//	}
//}