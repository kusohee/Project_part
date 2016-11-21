#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main() {
	int a;
	int b;

	while (1) {

		printf("정수를 하나 입력하세요. >> ");
		scanf("%d", &a);

		if (a == 0) {
			printf("종료합니다.\n");
			break;
		}

		printf("\n이진수 : ");
		for (b = 31; b >= 0; --b) {
			printf("%d", (a >> b) & 1);
		}
		printf("\n\n");
		printf("팔진수: \t\t\t%o\t%o\n\n", a, a);
		printf("16진수: \t\t\t%X\t%X\n\n\n", a, a);
	}
	return 0;
}
