#include <stdio.h>

int englishc = 0, space = 0, shuzi = 0, otherc = 0;

void acountnumber(char* c);

int main()
{
	printf("������:");
	char c;
	acountnumber(&c);
	printf("englishc������:%d, space������:%d, shuzi������:%d, otherc������:%d", englishc, space, shuzi, otherc - 1); //��һȷ�����з�����ͳ��

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