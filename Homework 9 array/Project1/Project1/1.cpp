/*
�m�W:������
�Ǹ�:1090604
���:2020/12/05
*/

#include <stdlib.h>
#include <stdio.h>

int idx(int arr[5]);

int main(void)
{
	int arr[5] = { 3,6,-6,66,4 };

	printf("The min value in array is : %d\n", idx(arr));

	system("pause");
	return 0;
}
int idx(int arr[5])
{
	int min = INT_MAX;
	for (int i = 0; i < 5; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	return min;
}