#include <stdio.h>

void swap(int *nx, int *ny) {
  int tmp;
  tmp = *nx;
  *nx = *ny;
  *ny = tmp;
}

void sort_3(int *n1, int *n2, int *n3) {
  if (*n1 > *n2)
    swap(n1, n2);
  if (*n2 > *n3)
    swap(n2, n3);
  if (*n1 > *n2)
    swap(n1, n2);
}

int main(void) {
	int x, y, z;

	printf("整数を入力して下さい\n");
	printf("整数X : "); scanf("%d", &x);
	printf("整数Y : "); scanf("%d", &y);
	printf("整数Z : "); scanf("%d", &z);

	sort_3(&x, &y, &z);

	printf("昇順に並べ替えた結果です\n");
	printf("整数-小 : %d\n", x);
	printf("整数-中 : %d\n", y);
	printf("整数-大 : %d\n", z);

	return 0;
}
