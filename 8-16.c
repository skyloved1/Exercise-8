#include <stdio.h>
#include <string.h>

int temp_count;

int* countnum(char* str_ptr);

int main() {
	char str_arr[30] = { ' ' };
	char* str_ptr = str_arr;
	printf("Input string.\n");
	fgets(str_ptr, 29, stdin);
	int* num_ptr = countnum(str_ptr);
	printf("����%d������", temp_count);
	printf("�ֱ���:\n");
	for (int i = 0; i < temp_count; i++) {
		printf("%d\t", *(num_ptr + i));
	}
}

int* countnum(char* str_ptr) {
	int i = 0;
	static int temp_arr[10] = { 0 };
	int* temp_ptr = temp_arr;

	temp_count = 0; //��Ϊ��ʱָ���������Ƶı����Լ�ͳ�������������
	for (; i < strlen(str_ptr); i++) {
		int tempnumber = 0;
		if (*(str_ptr + i) >= '0' && *(str_ptr + i) <= '9') {
			int j = i;
			while (*(str_ptr + j) >= '0' && *(str_ptr + j) <= '9') {
				tempnumber = tempnumber * 10 + (*(str_ptr + j) - '0');
				j++;
				i++;
			}
			*(temp_ptr + temp_count) = tempnumber;
			temp_count++;
			//i = j - 1; // ����i��λ�ã���������ȡ������
		}
	}
	return temp_arr;
}