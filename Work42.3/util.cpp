// FROM KANTNOLI 
#include "util.h"


void rand_init(int** matrix, int sizeY, int sizeX, int max, int min) {

	for (int j = 0; j < sizeY; j++) {
		for (int i = 0; i < sizeX; i++) {
			matrix[j][i] = rand() % (max - min + 1) + min;
		}
	}


}

string show(int** matrix, int sizeX, int sizeY) {
	string msg = "Marks: \n";
	for (int i = 0; i < sizeY; i++)
	{
		for (int j = 0; j < sizeX; j++)
		{
			msg += to_string(matrix[i][j]) + " ";
		}
		msg += "\n";
	}
	return msg;
}
// FROM KANTNOLI 