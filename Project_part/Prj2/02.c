#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

 int main() {

 	char a, b;
 	int num;
 	int c, d;

 	while (1) {

 		printf("\t\t[1] ��Ʈ AND(&)\n\n");
 		printf("\t\t[2] ��Ʈ OR(|)\n\n");
		printf("\t\t[3] ��Ʈ XOR(^)\n\n");
 		printf("\t\t[4] ��Ʈ COMPLEMENT(~)\n\n");
 		printf("\t\t[0] ����(stop)\n\n");

 		printf("�� ���� �� �ϳ��� �����ϼ���. >> ");
 		scanf("%c%d%c", &a, &num, &b);

 		if (num == 0) {
 			printf("�����մϴ�.\n");
			break;
}

 		printf("\n\n\n\n");

 		switch (num) {
 		case 1:
 			printf("��Ʈ ������ �� ���� �Է� >> ");
 			scanf("%d %d", &c, &d);

 			printf("\n\t    x = ");
 			for (int i = 31; i >= 0; --i) {
 				printf("%d", (c >> i) & 1);

				}
 			printf(" %d\n\n", a);

 			printf("\t    y = ");
 			for (int i = 31; i >= 0; --i) {
 				printf("%d", (d >> i) & 1);


				}
 			printf(" %d\n\n", d);
 			printf("\tx & y = ");
			for (int i = 31; i >= 0; --i) {
				printf("%d", ((c & d) >> i) & 1);

				}
 			printf(" %d\n\n", c & d);
 			break;

 		case 2:
 			printf("��Ʈ ������ �� ���� �Է� >> ");
 			scanf("%d %d", &c, &d);

 			printf("\n\t    x = ");
 			for (int i = 31; i >= 0; --i) {
 				printf("%d", (c >> i) & 1);

						}
 			printf(" %d\n\n", c);

 			printf("\t    y = ");
 			for (int i = 31; i >= 0; --i) {
 				printf("%d", (d >> i) & 1);

						}
 			 printf(" %d\n\n", d);

			printf("\tx | y = ");
 			for (int i = 31; i >= 0; --i) {
 				printf("%d", ((c | d) >> i) & 1);

						}
 			printf(" %d\n\n", c | d);
 			break;

 		case 3:
			printf("��Ʈ ������ �� ���� �Է� >> ");
			scanf("%d %d", &c, &d);

			printf("\n\t    x = ");
 			for (int i = 31; i >= 0; --i) {
 				printf("%d", (c >> i) & 1);

								}
 			printf(" %d\n\n", c);

 			printf("\t    y = ");
 			for (int i = 31; i >= 0; --i) {
 				printf("%d", (d >> i) & 1);

								}
 			printf(" %d\n\n", d);

 			printf("\tx ^ y = ");
 			for (int i = 31; i >= 0; --i) {
 				printf("%d", ((c ^ d) >> i) & 1);

								}
 			printf(" %d\n\n", c ^ d);

			break;

 		case 4:
 			printf("��Ʈ ����(~) ������ �ϳ��� ���� �Է� >> ");
			scanf("%d", &c);

 			printf("\n\t    x = ");
 			for (int i = 31; i >= 0; --i) {
 				printf("%d", (c >> i) & 1);

										}
 			printf("\n");

 			printf("\t   ~x = ");
			for (int i = 31; i >= 0; --i) {
 				printf("%d", ((~c) >> i) & 1);

										}
 			printf(" %d\n\n", ~c);
 			break;

		}

 		printf("\n===========================================\n\n");
	}

}
