// ����ڴ� ���� �Ǵ� �ҹ��� ����� ������ �� �ֽ��ϴ�.
// ����ڴ� �̸� �������� ������� �������� ������� ������ ��
// ���� ����� ������ ������ �� �ֽ��ϴ�.
// ���� ��� 1���� 10 ���̿��� ������ ������ ���ڸ� �����ϰ� 
// ������ ���, 'a'���� 'z'������ ������ ������ ���ڸ� ����մϴ�.
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	int print, direct, range1, range2;
//	char c_range1, c_range2;
//	printf("1.���� ��� 2. �ҹ��� ��� : ");
//	scanf("%d", &print);
//	if (print == 1) {
//		printf("1.���� 2. ���� : ");
//		scanf("%d", &direct);
//		printf("����� ���� : ");
//		scanf("%d %d", &range1, &range2);
//		if (direct == 1) {
//			printf("������ ������ ���� ���\n");
//			for (int i = range1; i <= range2; i++) {
//				printf("%d��° ���� %d\n", i - range1 + 1, i+1);
//			}
//		}
//		else if (direct == 2) {
//			printf("������ ������ ���� ���\n");
//			for (int i = range2; i >= range1; i--) {
//				printf("%d��° ���� %d\n", i - range1 + 1, i - 1);
//			}
//		}
//	}
//	if (print == 2) {
//		printf("1. ���� 2. ���� : ");
//		scanf("%d", &direct);
//		getchar();
//		printf("����� ���� : ");
//		scanf("%c %c", &c_range1, &c_range2);
//	}
//	if (direct == 1) {
//		printf("������ ������ �ҹ��� ���\n");
//		for (int i = c_range1; i <= c_range2; i++) {
//			printf("%d��° �ҹ��� %c\n", i - c_range1 + 1, i );
//		}
//	}
//	else if (direct == 2) {
//		printf("������ ������ �ҹ��� ���\n");
//		for (int i = c_range2; i >= c_range1; i--) {
//			printf("%d��° �ҹ��� %c\n", i - c_range1 + 1, i );
//		}
//	}
//
//}
