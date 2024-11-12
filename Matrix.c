#include <stdio.h>

int findInMat(char mat[3][3], int rows, int cols, char elem)
{
	for (int i = 0; i < rows; ++i) {

		for (int j = 0; j < cols; ++j) {
			if (mat[i][j] == elem){
				printf("%d, %d", i, j);
			}
		}
		printf("\n");
	}
}

int maxMat(int mat[4][3], int rows, int cols)
{
	int max = mat[0][0];

	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j){
			if (mat[i][j] > max) {
				max = mat[i][j];
			}
		}
	}
	printf("%d", max);
}

int minMat(int mat[4][3], int rows, int cols)
{
	int min = mat[0][0];

	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			if (mat[i][j] < min) {
				min = mat[i][j];
			}
		}
	}
	printf("%d", min);
}

int printMat4x3(int mat[4][3], int rows, int cols)
{
	for (int i = 0; i < rows; ++i) {

		for (int j = 0; j < cols; ++j) {
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	int mat4x3[4][3] = { {1, 4, 88},
						 {55, -3, 0},
						 {12, -34, -56},
						 {1, 2, 3} };

	char mat3x3[3][3] = {
		{'c', 's', 'i'}, 
		{'a', 'b', 'c'}, 
		{':', '/', '#'} };

	printMat4x3(mat4x3, 4, 3);
	printf("\n");
	maxMat(mat4x3, 4, 3);
	printf("\n");
	minMat(mat4x3, 4, 3);
	printf("\n");
	findInMat(mat3x3, 3, 3, '#');
	return 0;
}
