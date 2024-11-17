//파이썬에서 배운 것 c로 구현해보기
// 함수 만들기
// 1. n2가 n1보다 크거나 같게 만든다.
// 2. n1과 n2를 포함해서 두 수 사이의 갯수
// 3. n1과 n2를 포함해서 두 수 사이의 합
// 4. n1과 n2를 포함해서 두 수 사이의 곱
// 미션 : 사용자로부터 2개의 정수들을 입력받은 후, 지금까지 만든 함수들로 두 수 사이의 평균을 구해서 출력하시오.
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