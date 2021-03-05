#include <stdio.h>

int main(void) {
	puts("b - a의 값을 구합니다.");
	printf("a의 값:");
	int a;
	int b;
	scanf_s("%d", &a);

	do {
		printf("b의 값: ");
		scanf_s("%d", &b);
		if (a > b) {
			printf("a보다 큰 값을 입력하세요!\n");
		}
	} while (a > b);

	printf("%d - %d = %d", b, a, b - a);
	return 0;
}