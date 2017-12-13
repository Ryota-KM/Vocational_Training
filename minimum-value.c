#include <stdio.h>

int min(int a, int b, int c) {

	int min;

	if (a < b && a < c) {
		min = a;
	}	else if (b < a && b < c) {
		min = b;
	} else {
		min = c;
	}
	return min;
}


int main(void) {
	int a, b, c, num_min;

	printf("整数A:"); scanf("%d", &a);
	printf("整数B:"); scanf("%d", &b);
	printf("整数C:"); scanf("%d", &c);

	num_min = min(a, b, c);

  printf("最小値は%dです\n", num_min);
	return 0;
}
