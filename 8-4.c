#include <stdio.h>
#include <stdlib.h>
int main() {
	//尝试创建动态数组
	int dynamic_arr_size = 0;
	printf("请输入数组大小\n");
	scanf_s("%d", &dynamic_arr_size);
	int* dynamic_arr = (int*)malloc(dynamic_arr_size * sizeof(int));
	if (*dynamic_arr == NULL)
	{
		printf("申请内存失败，无法创建动态数组");
	}
	printf("输入数组元素:\n");
	//输入元素
	for (int i = 0; i < dynamic_arr_size; i++)
	{
		scanf_s("%d", (dynamic_arr + i));
	}
	void exchange_last_3_number(int* arr, int arr_size);
	exchange_last_3_number(dynamic_arr, dynamic_arr_size);

	printf("进行操作后的动态数组:\n");
	for (int i = 0; i < dynamic_arr_size; i++)
	{
		printf("%d\t", *(dynamic_arr + i));
	}

	free(dynamic_arr);//释放动态数组
	return 0;
}
void exchange_last_3_number(int* arr, int arr_size) {
	//创建临时数组存放后三个数
	int temp_arr[3] = { 0 };
	int* temp_pointer = temp_arr;
	for (int i = 0; i < 3; i++)
	{
		*(temp_pointer + i) = *(arr + arr_size - 3 + i);//arr + arr_size 使用相对位置
	}
	//数组元素后移
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
	//将提取出来的元素放到arr中
	for (int i = 0; i < 3; i++)
	{
		*(arr + i) = *(temp_arr + i);
	}
}