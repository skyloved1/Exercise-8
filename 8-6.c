#include <stdio.h>
int main() {
	char arr[50] = { ' ' };
	char* p = arr;
	printf("Input string.\n");
	fgets(p, 49, stdin);
	int  str_length(char* p);
	printf("�ַ�������Ϊ:%d\n", str_length(p));
	return 0;
}
int  str_length(char* p) {
	int i;
	for (i = 0; *(p + i) != '\0'; i++)
	{
	}
	return (i - 1);//����ͳ��'\0'�ַ�
}