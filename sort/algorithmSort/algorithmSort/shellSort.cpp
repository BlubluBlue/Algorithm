#include"algorithmSort.h"

void shellSort(int *numbers, int size)
{
	int gap = size;
	while (gap /= 2) {
		for (int i = 0; i < gap; i++) {
			for (int j = i + gap; j < size; j += gap) {
				int key = numbers[j];
				int k = j - gap;
				for (; k >= i; k -= gap) {
					if (numbers[k] < key) {
						break;
					}
					numbers[k + gap] = numbers[k];
				}
				numbers[k + gap] = key;
			}
		}
	}
}