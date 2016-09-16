#include"algorithmSort.h"

void bubbleSort(int *numbers, int size)
{
	for (int i = 0; i < size - 1; i++) {
		for (int j = size - 1; j > i; j--) {
			if (numbers[j - 1] > numbers[j]) {
				swap(numbers[j - 1], numbers[j]);
			}
		}
	}
}