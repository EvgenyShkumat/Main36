#include <iostream>
#define N 5
#define M 6
using namespace std;

void random_matrix_init(int matrix[N][M], int min, int max);
string convert_matrix_to_string(int matrix[N][M]);

int main() {
	int matrix[N][M];

	random_matrix_init(matrix, 0, 9);

	cout << "Matrix:\n" << convert_matrix_to_string(matrix);

	return 0;
}