#include <stdio.h>
int main() {
	int max(int, int);
	int (*p)(int, int);
	printf("input a,b\n");
	int a, b, c;
	scanf_s("%d%d", &a, &b);
	p = max;
	c = max(a, b);
	printf("a=%d\tb=%d\tmax=%d", a, b, c);
	return 0;
}
int max(int a, int b) {
	int z;
	if (a > b)
	{
		z = a;
	}
	else
	{
		z = b;
	}
	return z;
}