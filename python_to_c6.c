//���̽㿡�� ��� �� c�� �����غ���
// 3���� �л����� 5������ ������ ���Ҵ�.
// 1. ����ڷκ��� �� �л��� ���� 5������ �������� �Է¹޾� ����Ʈ�� �����Ͻÿ�. 
// 2. �� �л��� ���� 5���� �������� �ִ밪, �ּڰ��� ���Ͻÿ�. 
// 3. �� �л��� ���� 5���� �������� ��, ����� ���Ͻÿ�. 
// 4. �� ���� ���� 3�л����� �ִ밪, �ּڰ��� ���Ͻÿ�. 
// 5. �� ���� ���� 3�л����� ��, ����� ���Ͻÿ�.
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	int report_card[3][5];
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 5; j++) {
//			printf("%d��° �л��� %d��° ������ ������ �Է��Ͻÿ�. : ", i+1, j+1);
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
//		printf("%d��° �л��� 5������ ������ ���� �ִ밪 : %d\n", i+1, grade_max[i]);
//		printf("%d��° �л��� 5������ ������ ���� �ּڰ� : %d\n", i+1, grade_min[i]);
//		printf("%d��° �л��� 5������ ������ �� : %d\n", i + 1, grade_sum[i]);
//		printf("%d��° �л��� 5������ ������ ��� : %f\n", i + 1, grade_average[i]);
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
//		printf("%d��° ������ 3�л��� ���� �ִ밪 : %d\n", j + 1, student_max[j]);
//		printf("%d��° ������ 3�л��� ���� �ּڰ� : %d\n", j + 1, student_min[j]);
//		printf("%d��° ������ 3�л��� ���� �� : %d\n", j + 1, student_sum[j]);
//		printf("%d��° ������ 3�л��� ���� ��� : %f\n", j + 1, student_average[j]);
//	}
//}