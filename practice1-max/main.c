#include <stdio.h>

// �� ���� �ִ��� ���ϴ� �Լ� max4�� �ۼ��ϼ���.

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