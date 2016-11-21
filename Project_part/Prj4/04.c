#include <stdio.h>

int main() {
	int ct;
	int count = 0;

	for (int i = 1; i <= 10; ) {

		for (int a = 1; a <= 257; a++) {

			ct = 0;
			for (int b = 1; b <= a; b++) {
				if (a % b == 0) ct++;
			}

			if (ct == 2) {
				if (count == 0) {
					for (int j = 10 - i; j >= 0; j--) {
						printf("  ");
					}
				}

				printf("%d  ", a);
				count++;

				if (count == i) {
					printf("\n");
					count = 0;
					i++;
				}
			}

		}

	}

}
