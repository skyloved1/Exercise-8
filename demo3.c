#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	char a[] = "I am a teacher.";
	char b[] = " You are a student.";
	puts(a);
	puts(b);
	printf("copy string a to string b:\n");
	copy_string(a, b);
	printf("Have been changed string:\n");
	puts(a);
	puts(b);
	return 0;
	_aligned_offset_malloc
}
void copy_string(char a, char b) {
}