#include <stdio.h>

int main(void) {
	int data[] = { 10, 27, 81, 46, 29, 3, 35, 136, 58, 77 };
	int i, even, odd;

	even = odd = 0;

	for (i = 0; i<10; i++) {
		if (data[i] % 2 == 0) {
			even++;
		} else {
			odd++;
		}
	}


	printf("偶数の数は%d個です\n", even);
	printf("奇数の数は%d個です\n", odd);

	return 0;
}
