#include"algorithmSort.h"

void selectSort(int *numbers, int size)
{
	for (int i = 0; i < size - 1; i++) {
		int min = i;
		for (int j = i + 1; j < size; j++) {
			if (numbers[j] < numbers[min]) {
				min = j;
			}
		}
		swap(numbers[i], numbers[min]);
	}
}