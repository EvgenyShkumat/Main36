#include <iostream>
#include <string>
#define N 5
#define M 5
using namespace std;

void random_matrix_init(int matrix[N][M], int min, int max);
string convert_matrix_to_string(int matrix[N][M]);

string find_asc_sequence(int matrix[N][M]);
int find_max_element_in_asc_sequence(int matrix[N][M]);
int find_longest_asc_sequence(int matrix[N][M]);

int main() {
	int matrix[N][M];

	random_matrix_init(matrix, 0, 9);

	cout << "Matrix:\n" << convert_matrix_to_string(matrix);
	cout << "The longest asc sequence in " << find_longest_asc_sequence(matrix) + 1 << " row";

	return 0;
}