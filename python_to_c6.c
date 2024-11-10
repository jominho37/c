//파이썬에서 배운 것 c로 구현해보기
// 3명의 학생들이 5과목의 시험을 보았다.
// 1. 사용자로부터 각 학생에 대한 5과목의 성적들을 입력받아 리스트에 저장하시오. 
// 2. 각 학생에 대해 5과목 성적들의 최대값, 최솟값을 구하시오. 
// 3. 각 학생에 대해 5과목 성적들의 합, 평균을 구하시오. 
// 4. 각 과목에 대해 3학생들의 최대값, 최솟값을 구하시오. 
// 5. 각 과목에 대해 3학생들의 합, 평균을 구하시오.
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	int report_card[3][5];
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 5; j++) {
//			printf("%d번째 학생의 %d번째 과목의 성적을 입력하시오. : ", i+1, j+1);
//			scanf("%d", &report_card[i][j]);
//		}
//	}
//	int grade_max[3];
//	int grade_min[3];
//	for (int i = 0; i < 3; i++) {
//		grade_max[i] = report_card[i][0];
//		grade_min[i] = report_card[i][0];
//	}
//	int grade_sum[3] = { 0 };
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 5; j++) {
//			if (grade_max[i] < report_card[i][j]) {
//				grade_max[i] = report_card[i][j];
//			}
//			if (grade_min[i] > report_card[i][j]) {
//				grade_min[i] = report_card[i][j];
//			}
//			grade_sum[i] = grade_sum[i] + report_card[i][j];
//		}
//	}
//	float grade_average[3];
//	for (int i = 0; i < 3; i++) {
//		grade_average[i] = (float)grade_sum[i] / 5;
//	}
//	for (int i = 0; i < 3; i++) {
//		printf("%d번째 학생의 5과목의 성적에 대한 최대값 : %d\n", i+1, grade_max[i]);
//		printf("%d번째 학생의 5과목의 성적에 대한 최솟값 : %d\n", i+1, grade_min[i]);
//		printf("%d번째 학생의 5과목의 성적의 합 : %d\n", i + 1, grade_sum[i]);
//		printf("%d번째 학생의 5과목의 성적의 평균 : %f\n", i + 1, grade_average[i]);
//	}
//	int student_max[5];
//	int student_min[5];
//	int student_sum[5] = { 0 };
//	for (int j = 0; j < 5; j++) {
//		student_max[j] = report_card[0][j];
//		student_min[j] = report_card[0][j];
//	}
//	for (int j = 0; j < 5; j++) {
//		for (int i = 0; i < 3; i++) {
//			if (student_max[j] < report_card[i][j]) {
//				student_max[j] = report_card[i][j];
//			}
//			if (student_min[j] > report_card[i][j]) {
//				student_min[j] = report_card[i][j];
//			}
//			student_sum[j] = student_sum[j] + report_card[i][j];
//		}
//	}
//	float student_average[5];
//	for (int j = 0; j < 5; j++) {
//		student_average[j] = (float)student_sum[j] / 3;
//	}
//	for (int j = 0; j < 5; j++) {
//		printf("%d번째 과목의 3학생에 대한 최대값 : %d\n", j + 1, student_max[j]);
//		printf("%d번째 과목의 3학생에 대한 최솟값 : %d\n", j + 1, student_min[j]);
//		printf("%d번째 과목의 3학생에 대한 합 : %d\n", j + 1, student_sum[j]);
//		printf("%d번째 과목의 3학생에 대한 평균 : %f\n", j + 1, student_average[j]);
//	}
//}