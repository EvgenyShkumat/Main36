#include <iostream>
#include <string>
#define N 4
#define M 4

using namespace std;

void random_matrix_init(int matrix[N][M], int min, int max) {
	srand(time(NULL));

	if (min > max) {
		swap(min, max);
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			matrix[i][j] = rand() % (max - min + 1) + min;
		}
	}
}

string convert_matrix_to_string(int matrix[N][M]) {
	string msg = "";

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			msg += to_string(matrix[i][j]) + " ";
		}
		msg += "\n";
	}

	return msg;
}