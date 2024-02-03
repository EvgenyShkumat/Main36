#include <iostream>
#include <string>
#define N 4
#define M 4
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

int find_longest_asc_sequence(int matrix[N][M]) {
	int max_count = 0;
	int sequence_index = -1;

	for (int i = 0; i < N; i++)
	{
		int current_count = 1;
		int max_current_count = 1;

		for (int j = 0; j < M - 1; j++)
		{
			if (matrix[i][j] <= matrix[i][j + 1]) {
				current_count++;
			}
			else {
				max_current_count = current_count;
				current_count = 1;
			}
		}

		if (current_count > max_count || max_current_count > max_count) {
			max_count = current_count > max_current_count ? current_count : max_current_count;
			sequence_index = i;
		}
	}

	return sequence_index;
}

int find_longest_amount_number_in_asc_sequence(int matrix[N][M]) {
	int max_count = 0;

	for (int i = 0; i < N; i++)
	{
		int current_count = 1;
		int max_current_count = 1;

		for (int j = 0; j < M - 1; j++)
		{
			if (matrix[i][j] <= matrix[i][j + 1]) {
				current_count++;
			}
			else {
				max_current_count = current_count;
				current_count = 1;
			}
		}

		if (current_count > max_count || max_current_count > max_count) {
			max_count = current_count > max_current_count ? current_count : max_current_count;
		}
	}

	return max_count;
}	

int sum_between_positive(int matrix[N][M]) {
	int sum = 0;
	
	for (int i = 0; i < N; i++)
	{
		int first_positive_index = -1;
		int second_positive_index = -1;

		bool flag = true;

		for (int j = 0; j < M; j++)
		{
			if (matrix[i][j] > 0 && flag) {
				first_positive_index = j;
				flag = false;
			}
		}

		flag = true;

		for (int j = first_positive_index + 1; j < M; j++)
		{
			if (matrix[i][j] > 0 && flag) {
				second_positive_index = j;
				flag = false;
			}
		}

		cout << "first " << first_positive_index << " second " << second_positive_index << endl;

		for (int j = first_positive_index + 1; j < second_positive_index 
			&& first_positive_index != -1 && second_positive_index != -1; j++)
		{
			sum += matrix[i][j];
		}
	}
	
	return sum;
}

