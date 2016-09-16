#include"algorithmSort.h"
void merge(int *numbers, int left, int middle, int right);

void mergeSort(int *numbers, int left, int right)
{
	if (right > left) {
		int middle = (left + right) / 2;
		mergeSort(numbers, left, middle);
		mergeSort(numbers, middle + 1, right);
		merge(numbers, left, middle, right);
	}
}

void merge(int *numbers, int left, int middle, int right) {
	int *temp = new int[right - left + 1];
	int i = left, j = middle + 1, k = 0;
	while (i <= middle && j <= right) {
		if (numbers[i] < numbers[j]) {
			temp[k] = numbers[i++];
		} else {
			temp[k] = numbers[j++];
		}
		++k;
	}

	while (i <= middle) {
		temp[k++] = numbers[i++];
	}

	while (j <= right) {
		temp[k++] = numbers[j++];
	}

	for (int i = 0; i + left <= right; ++i) {
		numbers[left + i] = temp[i];
	}

	delete[] temp;
}