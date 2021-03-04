#include <stdio.h>

// 세 값의 대소 관계 13종류의 모든 조합에 대해 중앙값을 구하여 출력하는 프로그램을 작성하세요.

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
	printf("%d %d %d의 중앙값은 %d 입니다.", a, b, c, med(a, b, c));
	return 0;

}