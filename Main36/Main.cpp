#include <iostream>
#define N 3
#define M 5
using namespace std;

void random_matrix_init(int matrix[N][M], int min, int max);
string convert_matrix_to_string(int matrix[N][M]);

string find_asc_sequence(int matrix[N][M]);

int main() {
	int matrix[N][M];

	random_matrix_init(matrix, 0, 9);

	string msg = find_asc_sequence(matrix) == "" ? 
		"There is no sequences" : find_asc_sequence(matrix);

	cout << "Matrix:\n" << convert_matrix_to_string(matrix);
	cout << "The columns which have asc sequence:\n" << msg;

	return 0;
}