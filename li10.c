#include <stdio.h>

void sort(int* x, int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (*(x + j) > *(x + i)) {
				int temp = *(x + j);
				*(x + j) = *(x + i);
				*(x + i) = temp;
			}
		}
	}
}

int main() {
	int a[10] = { 12, 34, 5, 689, -43, 56, -21, 0, 24, 65 };
	int* pointer_a = a;
	/*for (int i = 0; i < 10; i++) {
		scanf_s("%d", pointer_a);
		pointer_a++;
	}*/
	pointer_a = a;
	sort(pointer_a, 10);
	for (int i = 0; i < 10; i++) {
		printf("%d\t", *(a + i));
	}
	printf("\n");
	return 0;
}