#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

 int main() {

 	char a, b;
 	int num;
 	int c, d;

 	while (1) {

 		printf("\t\t[1] 비트 AND(&)\n\n");
 		printf("\t\t[2] 비트 OR(|)\n\n");
		printf("\t\t[3] 비트 XOR(^)\n\n");
 		printf("\t\t[4] 비트 COMPLEMENT(~)\n\n");
 		printf("\t\t[0] 종료(stop)\n\n");

 		printf("위 연산 중 하나를 선택하세요. >> ");
 		scanf("%c%d%c", &a, &num, &b);

 		if (num == 0) {
 			printf("종료합니다.\n");
			break;
}

 		printf("\n\n\n\n");

 		switch (num) {
 		case 1:
 			printf("비트 연산할 두 정수 입력 >> ");
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
 			printf("비트 연산할 두 정수 입력 >> ");
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
			printf("비트 연산할 두 정수 입력 >> ");
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
 			printf("비트 보수(~) 연산할 하나의 정수 입력 >> ");
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
