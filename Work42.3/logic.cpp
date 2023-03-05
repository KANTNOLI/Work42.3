// FROM KANTNOLI 
#include "logic.h"

string output_data(int** matrix, int sizeX, int index) {
	string data = "\t";

	for (int i = 0; i < sizeX; i++)
	{
		data += to_string(matrix[index][i]) + "\t";
	}


	return data;
}

string sum_total(int** matrix, int sizeX, int index) {
	string total = "";
	int sum = 0;

	for (int i = 0; i < sizeX; i++)
	{
		sum += matrix[index][i];
	}

	total += to_string(sum);

	return total;
}

int sum_points(int** matrix, int index) {
	int sum = 0;

	sum += matrix[index][0] * 7 + matrix[index][1] * 6 + matrix[index][2] * 5;

	return sum;
}

void sorting(int** matrix, int* array, int sizeY) {

	for (int i = 0; i < sizeY - 1; i++)
	{
		for (int i = 0; i < sizeY - 1; i++)
		{
			int first = sum_points(matrix, array[i]);
			int second = sum_points(matrix, array[i + 1]);
			if (first < second) {
				int t = array[i];
				array[i] = array[i + 1];
				array[i + 1] = t;
			}
		}
	}
}

string help_output(int** matrix, int* array, int sizeY, int sizeX, int index) {
	string help = "";
	help += output_data(matrix, sizeX, array[index]) + sum_total(matrix, sizeX, array[index]) + "\t " + to_string(sum_points(matrix, array[index])) + "\n";
	
	return help;
}

string output_all_work(int** matrix, int* array, int sizeY, int sizeX) {
	string msg = "";


	string output_before = "";


	cout << "Initial data: " << endl;
	for (int i = 0; i < sizeY; i++)
	{
		switch (array[i]) {
		case 0: output_before += "Austria: " + output_data(matrix, sizeX, i) + "\n"; break;
		case 1: output_before += "Germany: " + output_data(matrix, sizeX, i) + "\n"; break;
		case 2: output_before += "Norway:  " + output_data(matrix, sizeX, i) + "\n"; break;
		case 3: output_before += "Russia:  " + output_data(matrix, sizeX, i) + "\n"; break;
		case 4: output_before += "Finland: " + output_data(matrix, sizeX, i) + "\n"; break;
		case 5: output_before += "China:   " + output_data(matrix, sizeX, i) + "\n"; break;
		case 6: output_before += "US:      " + output_data(matrix, sizeX, i) + "\n"; break;
		case 7: output_before += "Belarus: " + output_data(matrix, sizeX, i) + "\n"; break;
		}
	}

	msg += output_before + "\n";
	msg += "Evil team.    Gold.    Ser.    Br.    Total.    Points\n";
	sorting(matrix, array, sizeY);

	string output_after = "";
	for (int i = 0; i < sizeY; i++)
	{
		switch (array[i]) {
		case 0: output_after += "Austria: " + help_output(matrix, array, sizeY, sizeX, i); break;
		case 1: output_after += "Germany: " + help_output(matrix, array, sizeY, sizeX, i); break;
		case 2: output_after += "Norway:  " + help_output(matrix, array, sizeY, sizeX, i); break;
		case 3: output_after += "Russia:  " + help_output(matrix, array, sizeY, sizeX, i); break;
		case 4: output_after += "Finland: " + help_output(matrix, array, sizeY, sizeX, i); break;
		case 5: output_after += "China:   " + help_output(matrix, array, sizeY, sizeX, i); break;
		case 6: output_after += "US:      " + help_output(matrix, array, sizeY, sizeX, i); break;
		case 7: output_after += "Belarus: " + help_output(matrix, array, sizeY, sizeX, i); break;
		}
	}

	msg += output_after + "\n";

	return msg;
}
// FROM KANTNOLI 