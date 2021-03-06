#ifndef ALGORITHM_ALGORITHM_SORT_H_
#define ALGORITHM_ALGORITHM_SORT_H_

void swap(int &a, int &b);

void bubbleSort(int *numbers, int size);
void insertSort(int *numbers, int size);
void insertHalfSort(int *numbers, int size);
void selectSort(int *numbers, int size);
void quickSort(int *numbers, int left, int right);
void mergeSort(int *numbers, int left, int right);
void shellSort(int *numbers, int size);
#endif