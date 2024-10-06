//파이썬에서 배운 것 c로 구현해보기
// 사용자로부터 10개의 정수를 입력받아서 전체 평균을 구하고 홀수들의 평균과 짝수들의 평균을 구하시오.(while문을 쓸 것.)
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(){
//
//	int input;
//	float sum = 0;
//	float odd_sum = 0;
//	float odd_num = 0;
//	float even_sum = 0;
//	float even_num = 0;
//
//	int i = 0;
//	while (i < 10) {
//		printf("input integer number : ");
//		scanf("%d", &input);
//		sum = sum + input;
//		if (input % 2 == 1) {
//			odd_sum = odd_sum + input;
//			odd_num = odd_num + 1;
//		}
//		else {
//			even_sum = even_sum + input;
//			even_num = even_num + 1;
//		
//		}
//		i++;
//	}
//	printf("\ninteger average : %f", sum / 10);
//	if (odd_num > 0) {
//		printf("\nodd integer average : %f", odd_sum / odd_num);
//	}
//	else {
//		printf("\nodd integer is not exist");
//	}
//	if (even_num > 0) {
//		printf("\neven integer average : %f", even_sum / even_num);
//	}
//	else {
//		printf("\neven integer number is not exist");
//	}
// }