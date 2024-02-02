#include <iostream>
#include <string>
#define N 5
#define M 3
using namespace std;

string find_asc_sequence(int matrix[N][M]) {
	string columns = "";

	for (int i = 0; i < M; i++)
	{
		bool flag = true;

		for (int j = 0; j < N - 1; j++)
		{
			if (matrix[j][i] > matrix[j + 1][i]) {
				flag = false;
			}
		}
		if (flag) {
			columns += "Column " + to_string(i + 1) + "\n";
		}
	}

	return columns;
}

int find_max_element_in_asc_sequence(int matrix[N][M]) {
	int max = -2147483647;
	
	for (int i = 0; i < N; i++)
	{
		bool flag = true;

		for (int j = 0; j < M - 1; j++)
		{
			if (matrix[i][j] > matrix[i][j + 1]) {
				flag = false;
			}
		}

		for (int j = 0; (j < M) && flag; j++)
		{
			if (matrix[i][j] > max) {
				max = matrix[i][j];
			}
		}
	}

	return max;
}