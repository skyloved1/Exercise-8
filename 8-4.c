#include <stdio.h>
#include <stdlib.h>
int main() {
	//���Դ�����̬����
	int dynamic_arr_size = 0;
	printf("�����������С\n");
	scanf_s("%d", &dynamic_arr_size);
	int* dynamic_arr = (int*)malloc(dynamic_arr_size * sizeof(int));
	if (*dynamic_arr == NULL)
	{
		printf("�����ڴ�ʧ�ܣ��޷�������̬����");
	}
	printf("��������Ԫ��:\n");
	//����Ԫ��
	for (int i = 0; i < dynamic_arr_size; i++)
	{
		scanf_s("%d", (dynamic_arr + i));
	}
	void exchange_last_3_number(int* arr, int arr_size);
	exchange_last_3_number(dynamic_arr, dynamic_arr_size);

	printf("���в�����Ķ�̬����:\n");
	for (int i = 0; i < dynamic_arr_size; i++)
	{
		printf("%d\t", *(dynamic_arr + i));
	}

	free(dynamic_arr);//�ͷŶ�̬����
	return 0;
}
void exchange_last_3_number(int* arr, int arr_size) {
	//������ʱ�����ź�������
	int temp_arr[3] = { 0 };
	int* temp_pointer = temp_arr;
	for (int i = 0; i < 3; i++)
	{
		*(temp_pointer + i) = *(arr + arr_size - 3 + i);//arr + arr_size ʹ�����λ��
	}
	//����Ԫ�غ���
	for (int i = arr_size - 3 - 1; i >= 0; i--)
	{
		*(arr + i + 3) = *(arr + i);
	}
	printf("temparr:\n");
	for (int i = 0; i < 3; i++)
	{
		printf("%d\t", *(temp_pointer + i));
	}
	printf("\n");
	//����ȡ������Ԫ�طŵ�arr��
	for (int i = 0; i < 3; i++)
	{
		*(arr + i) = *(temp_arr + i);
	}
}