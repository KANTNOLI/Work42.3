// FROM KANTNOLI 
#include "logic.h"

int main() {
	srand(time(NULL));

	int sizeY = 8;
	int sizeX = 3;

	int** matrix = new int* [sizeY];

	int* array = new int[sizeY];

	for (int i = 0; i < sizeY; i++)
	{
		array[i] = i;
	}

	for (int i = 0; i < sizeY; i++)
	{
		matrix[i] = new int[sizeX];
	}

	rand_init(matrix, sizeY, sizeX, 9, 0);

	cout << output_all_work(matrix, array, sizeY, sizeX) << endl;

	for (int i = 0; i < sizeY; i++)
	{
		delete[] matrix[i];
	}

	delete[] matrix;

	return 0;
}
// FROM KANTNOLI 