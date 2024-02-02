#include <iostream>
#include <string>
#define N 3
#define M 5
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