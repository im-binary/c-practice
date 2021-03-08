#include <stdio.h>

// 네 값의 최댓값을 구하는 함수 max4를 작성하세요.

int max4(int a, int b, int c, int d) {
	int max = a;
	if (b > max) max = b;
	if (c > max) max = c;
	if (d > max) max = d;
	return max;
}
int main(void) {
	int a; int b; int c; int d;
	scanf_s("%d %d %d %d", &a, &b, &c, &d);
	printf("(max4 : %d %d %d %d) = %d", a, b, c, d, max4(a, b, c, d));
}