#include <iostream>
#include <string>
#define N 4
#define M 4
using namespace std;

void random_matrix_init(int matrix[N][M], int min, int max);
string convert_matrix_to_string(int matrix[N][M]);

string find_asc_sequence(int matrix[N][M]);
int find_max_element_in_asc_sequence(int matrix[N][M]);
int find_longest_asc_sequence(int matrix[N][M]);
int find_longest_amount_number_in_asc_sequence(int matrix[N][M]);
int sum_between_positive(int matrix[N][M]);

int main() {
	int matrix[N][M];

	random_matrix_init(matrix, -9, 9);

	cout << "Matrix:\n" << convert_matrix_to_string(matrix);
	cout << "The sum between two positive numbers in each row is " << sum_between_positive(matrix);

	return 0;
}