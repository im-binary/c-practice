#include <stdio.h>
// �� ���� �ּڰ��� ���ϴ� min3 �Լ��� �ۼ��ϼ���.

int min3(int a, int b, int c) {
	int min = a;
	if (b < min) min = b;
	if (c < min) min = c;
	return min;
}
int main(void) {
	int a; int b; int c;
	scanf_s("%d %d %d", &a, &b, &c);
	printf("(min3 : %d %d %d = %d)", a, b, c, min3(a, b, c));
}