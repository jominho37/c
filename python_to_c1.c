// ���̽��� ��� ��, Ǯ���� ������ ������ c���� �ٽ� Ǯ���
// �� ���� a, b�� �����ϰ� ���� ���� 15, 4�� �ʱ�ȭ�Ͽ� a+b, a-b, a/b, a/b�� ��, a/b�� �������� ����ϱ�
#include <stdio.h>

int main()
{
	int a=15, b=4;
	float c = 15, d = 4;
	printf("a+b=%d\n", a + b);
	printf("a-b=%d\n", a - b);
	printf("a/b=%f\n", c/d);
	printf("a/b�� ��:%d\n",a / b);
	printf("a/b�� ������:%d\n", a % b);

}