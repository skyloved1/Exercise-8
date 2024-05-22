#include <stdio.h>
int main() {
	void inv(int* x, int n);
	int i, a[10] = { 3,7,9,11,0,6,7,5,4,2 }, * p;
	//change
	p = a;
	printf("input data.");
	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d", p++);
	}
	*p = a;//重置指针p的位置
	printf("Original array:\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d\t", a[i]);
	}
	printf("\n");
	inv(a, 10);
	printf("Has been changed array:\n ");
	for (int i = 0; i < 10; i++)
	{
		printf("%d\t", a[i]);
	}
	printf("\n");
	return 0;
}
void inv(int* x, int n) {
	int* p = x, temp, * i, * j;
	i = x; j = x + n - 1;
	for (; i <= j; i++, j--)
	{
		temp = *i; *i = *j;
		*j = temp;
	}
}