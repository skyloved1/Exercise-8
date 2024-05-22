#include <stdio.h>
#include <string.h>

int strcmp_custom(char* ptr_1, char* ptr_2);

int main() {
	char str1[31] = { ' ' }, str2[31] = { ' ' };
	printf("Input the first string:\n");
	fgets(str1, 30, stdin);
	printf("Input the second string:\n");
	fgets(str2, 30, stdin);
	int temp = strcmp_custom(str1, str2);
	if (temp > 0) {
		printf("The first string is larger.\n");
	}
	else if (temp == 0) {
		printf("They are equal.\n");
	}
	else {
		printf("The second string is larger.\n");
	}
}

int strcmp_custom(char* ptr_1, char* ptr_2) {
	for (int i = 0; i < strlen(ptr_1) && i < strlen(ptr_2); i++) {
		if (*(ptr_1 + i) > *(ptr_2 + i)) {
			return 1;
		}
		else if (*(ptr_1 + i) < *(ptr_2 + i)) {
			return -1;
		}
	}
	if (strlen(ptr_1) > strlen(ptr_2)) {
		return 1;
	}
	else if (strlen(ptr_1) < strlen(ptr_2)) {
		return -1;
	}
	return 0;
}