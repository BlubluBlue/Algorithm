#include"algorithmSort.h"

void insertHalfSort(int *numbers, int size)
{
	for (int i = 1; i < size; ++i) {
		int right = i, left = -1, key;
		while (right - left > 1) {
			key = left + (right - left) / 2;
			if (numbers[key] < numbers[i]) {
				left = key;
			}
			else {
				right = key;
			}
		}
		int temp = numbers[i];
		for (key = i; key > right; --key) {
			numbers[key] = numbers[key - 1];
		}
		numbers[right] = temp;
	}
}