//파이썬에서 배운 것 c로 구현해보기
//리스트에 정수를 15개 넣어서 정배열로 1번, 역배열로 1번 출력하고, 최대, 최소, 평균 / 홀수의 최대, 최소, 평균 / 짝수의 최대, 최소, 평균 구하기
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	int input[15];
//	int max;
//	int min;
//
//	for (int i = 0; i < 15; i++) {
//		printf("input integer : ");
//		scanf("%d", &input[i]);
//	}
//	for (int i = 0; i < 15; i++) {
//		printf("%d\n", input[i]);
//	}
//	for (int i = 0; i < 15; i++) {
//		printf("%d\n", input[14 - i]);
//	}
//	max = input[0];
//	min = input[0];
//	int sum = 0;
//	for (int i = 0; i < 15; i++) {
//		if (max <= input[i]) {
//			max = input[i];
//		}
//		if (min >= input[i]) {
//			min = input[i];
//		}
//		sum = sum + input[i];
//	}
//	float average = sum / 15;
//	printf("max : %d\n", max);
//	printf("min : %d\n", min);
//	printf("average : %f\n", average);
//
//	int odd[15];
//	int odd_num = 0;
//	for (int i = 0; i < 15; i++) {
//		if (input[i] % 2 == 1) {
//			odd[odd_num] = input[i];
//			odd_num = odd_num + 1;
//		}
//	}
//	int odd_max = odd[0];
//	int odd_min = odd[0];
//	int odd_sum = 0;
//	for (int i = 0; i < odd_num; i++) {
//		if (odd_max <= odd[i]) {
//			odd_max = odd[i];
//		}
//		if (odd_min >= odd[i]) {
//			odd_min = odd[i];
//		}
//		odd_sum = odd_sum + odd[i];
//	}
//	float odd_average = odd_sum / odd_num;
//	if (odd_num == 0) {
//		printf("odd integer is not exist");
//	}
//	else {
//
//		printf("odd max : %d\n", odd_max);
//		printf("odd min : %d\n", odd_min);
//		printf("odd_average : %f\n", odd_average);
//	}
//
//	int even[15];
//	int even_num = 0;
//	for (int i = 0; i < 15; i++) {
//		if (input[i] % 2 == 0) {
//			even[even_num] = input[i];
//			even_num = even_num + 1;
//		}
//	}
//	int even_max = even[0];
//	int even_min = even[0];
//	int even_sum = 0;
//	for (int i = 0; i < even_num; i++) {
//		if (even_max <= even[i]) {
//			even_max = even[i];
//		}
//		if (even_min >= even[i]) {
//			even_min = even[i];
//		}
//		even_sum = even_sum + even[i];
//	}
//	float even_average = even_sum / even_num;
//	if (even_num == 0) {
//		printf("even integer is not exist");
//	}
//	else {
//
//		printf("even max : %d\n", even_max);
//		printf("even min : %d\n", even_min);
//		printf("even_average : %f\n", even_average);
//	}
//
//}