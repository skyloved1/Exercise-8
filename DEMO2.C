#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	char a[] = "I am a student.", b[20];
	int i;
	char* p1 = a, * p2 = b;
	for (; *(p1) != '\0'; p1++, p2++)
	{
		*(p2) = *(p1);
	}
	*(p2) = '\0';
	printf("string arr is :%s\n", a);
	printf("string b is :%s\n", b);

	return 0;
}