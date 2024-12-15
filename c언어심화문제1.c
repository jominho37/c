// 특정 평점 이상의 학생 출력
// 1. 학생 수를 입력받고 각 학생의 이름과 평점을 입력받으세요.
// 2. 사용자로부터 특정 평점을 입력받고, 해당 평점 이상인 학생들의 이름과 평점을 출력하세요.
// 실행 예
// 학생 수(1~10): 3
// 1번째 학생의 이름 평점 : 김철수 3.5
// 2번째 학생의 이름 평점 : 이영희 4.2
// 3번째 학생의 이름 평점 : 박지민 2.8
// 특정 평점 : 3.0
// * **평점 3.0 이상인 학생 목록 * **
// 김철수 3.5
// 이영희 4.2
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//struct student {
//	char name[20];
//	float average_score;
//};
//
//int main() {
//	int student_num;
//	do {
//		printf("학생 수(1~10): ");
//		scanf("%d", &student_num);
//	} while (student_num < 1 || student_num>10);
//	struct student p[10];
//	for (int i = 0; i < student_num; i++) {
//		printf("%d번째 학생의 이름 평점 : ",i+1);
//		scanf("%s %f", p[i].name, &p[i].average_score);
//	}
//	float c_score;
//	printf("특정 평점 : ");
//	scanf("%f", &c_score);
//	printf("* **평점 3.0 이상인 학생 목록 * **\n");
//	for (int i = 0; i < student_num; i++) {
//		if (p[i].average_score >= c_score) {
//			printf("%s %.1f\n", p[i].name, p[i].average_score);
//		}
//	}
//}
