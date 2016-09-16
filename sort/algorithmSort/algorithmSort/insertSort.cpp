#include"algorithmSort.h"

void insertSort(int *numbers, int size)
{
	for (int i = 1; i < size; i++) {
		int key = numbers[i];
		for (int j = i - 1; j >= 0; j--) {
			if (numbers[j] < key) {
				numbers[j + 1] = key;
				break;
			}
			numbers[j + 1] = numbers[j];
		}
	}
}