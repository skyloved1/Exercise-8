#include <stdio.h>
int main() {
	int arr[10] = { 78,90,100,76,89,82,56,45,82,63 };

	void sort_Max_Min(int* arr, int arr_length);
	void print_array(int* arr, int arr_length);

	sort_Max_Min(arr, 10);
	print_array(arr, 10);
	return 0;
}

void creat_array(int* arr, int arr_length) {
	for (int i = 0; i < arr_length; i++)
	{
		scanf_s("%d", arr++);
	}
}

void sort_Max_Min(int* arr, int arr_length) {
	int* max = arr, * min = (arr + 1);
	for (int i = 0; i < arr_length; i++)
	{//寻找最大值与最小值的地址
		if (*max < *(arr + i))
		{
			max = (arr + i);
		}
		if (*min > *(arr + i))
		{
			min = (arr + i);
		}
	}
	int* start = arr, * end = arr + arr_length - 1;
	//对换
	int temp;
	temp = *start;
	*start = *min;
	*min = temp;
	//最大值对换
	temp = *end;
	*end = *max;
	*max = temp;
}

void print_array(int* arr, int arr_length) {
	for (int i = 0; i < arr_length; i++)
	{
		printf("%d\t", *arr++);
	}
}