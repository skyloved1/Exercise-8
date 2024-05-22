#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	char a[] = "I am a student.", b[20];
	int i;
	for (i = 0; *(a + i) != '\0'; i++)
	{
		*(b + i) = *(a + i);
	}
	*(b + i) = '\0';
	printf("string arr is :%s\n", a);
	printf("string b is :%s\n", b);

	return 0;
}