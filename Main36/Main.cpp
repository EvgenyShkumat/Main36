#include <iostream>
#include <string>
#define N 5
#define M 3
using namespace std;

void random_matrix_init(int matrix[N][M], int min, int max);
string convert_matrix_to_string(int matrix[N][M]);

string find_asc_sequence(int matrix[N][M]);
int find_max_element_in_asc_sequence(int matrix[N][M]);

int main() {
	int matrix[N][M];

	random_matrix_init(matrix, 0, 9);

	string msg = find_max_element_in_asc_sequence(matrix) == -2147483647 ?
		"There is no max element" : "Max element is " +
		to_string(find_max_element_in_asc_sequence(matrix));

	cout << "Matrix:\n" << convert_matrix_to_string(matrix);
	cout << msg;


	return 0;
}