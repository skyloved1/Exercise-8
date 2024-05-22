#include <stdio.h>

void inv(int x[], int n) {
	int temp;
	for (int i = 0; i < n / 2; i++) {
		temp = x[i];
		x[i] = x[n - i - 1];
		x[n - i - 1] = temp;
	}
}

int main() {
	int i, a[10] = { 3, 7, 9, 11, 0, 6, 7, 5, 4, 2 };
	printf("Original array:\n");
	for (int i = 0; i < 10; i++) {
		printf("%d\t", a[i]);
	}
	printf("\n");
	inv(a, 10);
	printf("Has been changed array:\n ");
	for (int i = 0; i < 10; i++) {
		printf("%d\t", a[i]);
	}
	printf("\n");
	return 0;
}