//���̽㿡�� ��� �� c�� �����غ���
// �Լ� �����
// 1. n2�� n1���� ũ�ų� ���� �����.
// 2. n1�� n2�� �����ؼ� �� �� ������ ����
// 3. n1�� n2�� �����ؼ� �� �� ������ ��
// 4. n1�� n2�� �����ؼ� �� �� ������ ��
// �̼� : ����ڷκ��� 2���� �������� �Է¹��� ��, ���ݱ��� ���� �Լ���� �� �� ������ ����� ���ؼ� ����Ͻÿ�.
//
//#include <stdio.h>
//
//int F_ComepareAndSwap(int n1, int n2) {
//	if (n1 >= n2) {
//		int n3, n4;
//		n3 = n2;
//		n4 = n1;
//		return n3, n4;
//	}
//	else {
//		int n3, n4;
//		n3 = n1;
//		n4 = n2;
//		return n3, n4;
//	}
//}
//int main() {
//	printf("%d%d", F_ComepareAndSwap(3, 2));
//}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int value = 38;
	int* pi;

	pi = &value;
	printf("%d %d %x\n", value, *pi, pi);
}