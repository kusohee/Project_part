#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b;
	int c;
	int dump;

 	printf("��ȯ�� �� ������ �Է��ϼ���. >> ");
 	scanf("%d %d", &a, &b);

 	printf("�Է��� �� �� : a = %d and b = %d\n\n", a, b);

 	printf(" �ӽ� ���� ��� [1]\n");
 	printf(" ������ �������� ��ȯ ���[2]\n");
 	printf(" ������ ���������� ��ȯ ���[3]\n");
 	printf(" XOR ������ ^ �̿� ���[4]\n\n");

 	printf("�� ��ȯ ��� �� �� ��ȣ�� �����ϼ���. >> ");
 	scanf("%d", &c);

 	switch (c) {
 	case 1:
 		dump = a;
 		a = b;
 		b = dump;
		break;

 	case 2:
		a = a + b;
		b = a - b;
		a = a - b;
		break;

 	case 3:
		a = a * b;
		b = a / b;
		a = a / b;
 		break;

 	case 4:
		a = a ^ b;
		b = a ^ b;
		a = a ^ b;
 		break;
}

	printf("��ȯ�� �� �� : x = %d and y = %d\n", a, b);
}
