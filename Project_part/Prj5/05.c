#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main() {
	int a;
	int b;

	while (1) {

		printf("������ �ϳ� �Է��ϼ���. >> ");
		scanf("%d", &a);

		if (a == 0) {
			printf("�����մϴ�.\n");
			break;
		}

		printf("\n������ : ");
		for (b = 31; b >= 0; --b) {
			printf("%d", (a >> b) & 1);
		}
		printf("\n\n");
		printf("������: \t\t\t%o\t%o\n\n", a, a);
		printf("16����: \t\t\t%X\t%X\n\n\n", a, a);
	}
	return 0;
}
