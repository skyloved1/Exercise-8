#include <stdio.h>
int main() {
	char arr[50] = { ' ' };
	char* p = arr;
	printf("Input string.\n");
	fgets(p, 49, stdin);
	int  str_length(char* p);
	printf("字符串长度为:%d\n", str_length(p));
	return 0;
}
int  str_length(char* p) {
	int i;
	for (i = 0; *(p + i) != '\0'; i++)
	{
	}
	return (i - 1);//避免统计'\0'字符
}