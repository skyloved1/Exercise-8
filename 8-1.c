#include <stdio.h>
int main() {
	int a, b, c;
	printf("input 3 data\n");
	scanf_s("%d%d%d", &a, &b, &c);
	int* p1, * p2, * p3;
	p1 = &a; p2 = &b; p3 = &c;
	void max(int* p1, int* p2);
	max(p1, p2);
	max(p2, p3);
	max(p1, p2);
	printf("a=%d,b=%d.c=%d", a, b, c);
	return 0;
}
void max(int* p1, int* p2) {
	if (*p1 > *p2)
	{//较大数往后排。
		int temp = *p1;
		*p1 = *p2;
		*p2 = temp;
	}
}