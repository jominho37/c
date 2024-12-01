// 사용자는 숫자 또는 소문자 출력을 선택할 수 있습니다.
// 사용자는 이를 정순으로 출력할지 역순으로 출력할지 선택한 후
// 또한 출력할 범위를 선택할 수 있습니다.
// 예를 들어 1부터 10 사이에서 선택한 범위의 숫자를 선택하고 
// 문자의 경우, 'a'부터 'z'까지의 선택한 범위의 문자를 출력합니다.
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	int print, direct, range1, range2;
//	char c_range1, c_range2;
//	printf("1.숫자 출력 2. 소문자 출력 : ");
//	scanf("%d", &print);
//	if (print == 1) {
//		printf("1.정순 2. 역순 : ");
//		scanf("%d", &direct);
//		printf("출력할 범위 : ");
//		scanf("%d %d", &range1, &range2);
//		if (direct == 1) {
//			printf("지정한 범위의 숫자 출력\n");
//			for (int i = range1; i <= range2; i++) {
//				printf("%d번째 숫자 %d\n", i - range1 + 1, i+1);
//			}
//		}
//		else if (direct == 2) {
//			printf("지정한 범위의 숫자 출력\n");
//			for (int i = range2; i >= range1; i--) {
//				printf("%d번째 숫자 %d\n", i - range1 + 1, i - 1);
//			}
//		}
//	}
//	if (print == 2) {
//		printf("1. 정순 2. 역순 : ");
//		scanf("%d", &direct);
//		getchar();
//		printf("출력할 범위 : ");
//		scanf("%c %c", &c_range1, &c_range2);
//	}
//	if (direct == 1) {
//		printf("지정한 범위의 소문자 출력\n");
//		for (int i = c_range1; i <= c_range2; i++) {
//			printf("%d번째 소문자 %c\n", i - c_range1 + 1, i );
//		}
//	}
//	else if (direct == 2) {
//		printf("지정한 범위의 소문자 출력\n");
//		for (int i = c_range2; i >= c_range1; i--) {
//			printf("%d번째 소문자 %c\n", i - c_range1 + 1, i );
//		}
//	}
//
//}
