#include"algorithmSort.h"

void insertSort(int *numbers, int size)
{
	for (int i = 1; i < size; i++) {
		int key = numbers[i];
		int j = i - 1;
		for (; j >= 0; j--) {
			if (numbers[j] < key) {
				
				break;
			}
			numbers[j + 1] = numbers[j];
		}
		numbers[j + 1] = key;
	}
}