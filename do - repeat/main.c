#include <stdio.h>

int main(void) {
	puts("b - a�� ���� ���մϴ�.");
	printf("a�� ��:");
	int a;
	int b;
	scanf_s("%d", &a);

	do {
		printf("b�� ��: ");
		scanf_s("%d", &b);
		if (a > b) {
			printf("a���� ū ���� �Է��ϼ���!\n");
		}
	} while (a > b);

	printf("%d - %d = %d", b, a, b - a);
	return 0;
}