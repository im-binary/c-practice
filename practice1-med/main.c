#include <stdio.h>

// �� ���� ��� ���� 13������ ��� ���տ� ���� �߾Ӱ��� ���Ͽ� ����ϴ� ���α׷��� �ۼ��ϼ���.

int med(int a, int b, int c) {
	if (a >= b)
		if (b >= c)
			return b;
		else if (c >= a)
			return a;
		else
			return c;
	else if (c < a)
		return a;
	else if (c > b)
		return b;
	else
		return c;
}

int main(void) {
	int a; int b; int c;
	scanf_s(" %d %d %d", &a, &b, &c);
	printf("%d %d %d�� �߾Ӱ��� %d �Դϴ�.", a, b, c, med(a, b, c));
	return 0;

}