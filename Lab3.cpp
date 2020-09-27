#include <stdio.h>

int main() {
	int n, val20, val10, val5, val1, num;
	printf("Sum: ");
	scanf_s("%d", &n);

	num = 0;
	for (val20 = 0; val20 <= n / 20; val20++)
		for (val10 = 0; val10 <= (n - 20 * val20) / 10; val10++)
			for (val5 = 0; val5 <= (n - 20 * val20 - 10 * val10) / 5; val5++) {
				val1 = n - 20 * val20 - 10 * val10 - 5 * val5;
				printf("%d(20) + %d(10) + %d(5) + %d(1)\n", val20, val10, val5, val1);
				num++;
			}
	printf("Num: %d", num);

	return 0;
}