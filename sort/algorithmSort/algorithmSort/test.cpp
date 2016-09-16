#include<iostream>
#include"algorithmSort.h"

int getNumbers(int *numbers, int size);
int getType();
void getResult(int *numbers, int size);
void sort(int *numbers, int size, int type);

const int MAX_SIZE = 10;

enum {
	BUBBLE_SORT = 0,
	INSERT_SORT,
	INSERT_HALF_SORT,
	SHELL_SORT,
	SELECT_SORT,
	QUICK_SORT,
	MERGE_SORT,
	HEAP_SORT
};

int main()
{
	int *numbers = new int[MAX_SIZE];
	int currentSize = getNumbers(numbers, MAX_SIZE);
	int type = getType();
	
	sort(numbers, currentSize, type);

	getResult(numbers, currentSize);

	delete[] numbers;
	return 0;
}

int getNumbers(int *numbers, int size)
{
	std::cout << "ÇëÊäÈë³õÊ¼ÊýÁÐ\n";
	while (size > 0 && std::cin >> numbers[MAX_SIZE - size]) {
		size--;
	}
	std::cin.clear();
	return MAX_SIZE - size;
}

int getType()
{
	std::cout << "ÇëÑ¡ÔñÅÅÐòËã·¨: " << "\n1.Ã°ÅÝÅÅÐò" << "\n2.²åÈëÅÅÐò" << "\n3.ÕÛ°ë²åÈëÅÅÐò"
		<< "\n4.Ï£¶ûÅÅÐò" << "\n5.Ñ¡ÔñÅÅÐò" << "\n6.¿ìËÙÅÅÐò" << "\n7.¹é²¢ÅÅÐò" << "\n8.¶ÑÅÅÐò" << std::endl;

	int type = 0;
	std::cin >> type;
	return type - 1;
}

void getResult(int *numbers, int size)
{
	int i = -1;
	while (++i < size) {
		std::cout << numbers[i] << ' ';
	}

	std::cout << std::endl;
}

void sort(int *numbers, int currentSize, int type)
{
	switch (type) {
		case BUBBLE_SORT: {
			bubbleSort(numbers, currentSize);
			break;
		}
		case INSERT_SORT: {
			insertSort(numbers, currentSize);
			break;
		}
		default: {
			//nothing to do
		}
	}
}