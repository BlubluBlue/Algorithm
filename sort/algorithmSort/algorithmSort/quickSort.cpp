#include"algorithmSort.h"

void quickSort(int *numbers, int left, int right)
{
	if (right > left) {
		int smaller = left - 1;
		for (int i = left; i < right; i++) {
			if (numbers[i] < numbers[right]) {
				swap(numbers[i], numbers[++smaller]);
			}
		}
		swap(numbers[++smaller], numbers[right]);
		quickSort(numbers, left, smaller - 1);
		quickSort(numbers, smaller + 1, right);
	}
}