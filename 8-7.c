#include <stdio.h>
#include <string.h>
int main() {
	char str[50] = { ' ' };
	char* str_p = str;
	printf("Input string\n");
	fgets(str_p, 49, stdin);
	printf("从第m个开始复制？\n");
	int m;
	scanf_s("%d", &m);
	char str2[50] = { ' ' };

	void string_m_copy(char* from, char* to, int m);
	string_m_copy(str_p, str2, m);
	fputs(str2, stdout);
	return 0;
}
void string_m_copy(char* from, char* to, int m) {
	int j, i;
	for (i = m - 1, j = 0; i < strlen(from); i++, j++)
	{
		*(to + j) = *(from + i);
	}
	*(to + j + 1) = '\0';
}