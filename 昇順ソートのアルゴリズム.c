#include <stdio.h>

void swap(int *nx, int *ny) {
	int tmp;
	tmp = *nx;
	*nx = *ny;
	*ny = tmp;
}

void sort_5(int *n1, int *n2, int *n3, int *n4, int *n5) {
	for (int i = 0; i <= 5; i++) {
		if (*n1 > *n2)
			swap(n1, n2);
		if (*n2 > *n3)
			swap(n2, n3);
		if (*n3 > *n4)
			swap(n3, n4);
		if (*n4 > *n5)
			swap(n4, n5);
	}
}
int main(void) {
	int a, b, c, d, e;

	printf("整数を入力して下さい\n");
	printf("整数A : "); scanf("%d", &a);
	printf("整数B : "); scanf("%d", &b);
	printf("整数C : "); scanf("%d", &c);
	printf("整数D : "); scanf("%d", &d);
	printf("整数E : "); scanf("%d", &e);

	sort_3(&a, &b, &c, &d, &e);

	printf("昇順に並べ替えた結果です\n");
	printf("整数-最小 : %d\n", a);
	printf("整数-小 : %d\n", b);
	printf("整数-中 : %d\n", c);
	printf("整数-大 : %d\n", d);
	printf("整数-最大 : %d\n", e);

	return 0;
}
