#include <stdio.h>

int englishc = 0, space = 0, shuzi = 0, otherc = 0;

void acountnumber(char* c);

int main()
{
	printf("请输入:");
	char c;
	acountnumber(&c);
	printf("englishc数量是:%d, space数量是:%d, shuzi数量是:%d, otherc数量是:%d", englishc, space, shuzi, otherc - 1); //减一确保换行符不被统计

	return 0;
}

void acountnumber(char* c)
{
	while (1)
	{
		*c = getchar();
		printf("%c", *c);
		if ((*c >= 'a' && *c <= 'z') || (*c >= 'A' && *c <= 'Z'))
		{
			englishc += 1;
		}
		else if (*c == ' ')
		{
			space += 1;
		}
		else if (*c >= '0' && *c <= '9')
		{
			shuzi += 1;
		}
		else
		{
			otherc += 1;
		}

		if (*c == '\n')
		{
			break;
		}
	}
}