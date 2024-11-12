#include <stdio.h>

int sumElems(int vec[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; ++i) {
		sum = sum + vec[i];
	}

	return sum;
}

int findInVec(int vec[], int size, int elem)
{
	for (int i = 0; i < size; ++i) {

		if (vec[i] == elem) {
			return 1;
		}
	}

	return 0;
}

int maxVec(int vec[], int size)
{
	int max = vec[0];

	for (int i = 0; i < size; ++i){
		if (max < vec[i]) {
			max = vec[i];
		}
	}
	return max;
}

int minVec(int vec[], int size)
{
	int min = vec[0];

	for (int i = 0; i < size; ++i) {
		if (min > vec[i]) {
			min = vec[i];
		}
	}
	return min;
}

int sameVec(int vec1[], int size1, int vec2[], int size2)
{
	if (size1 == size2) {
		for (int i = 0; i < size1; ++i) {
			if (vec1[i] != vec2[i]) {
				return 0;
			}
		}
		return 1;
	}
	else {
		return 0;
	}
}

int lengthString(char str[])
{
	int length = 0;
	for (int i = 0; str[i] != '\0'; ++i) {
		length++; // length = length + 1;
	}
	return length;
}

void printInReverseOrder(int vec[], int size) {

	for (int i = size - 1; i >= 0; --i) {
		printf("%d ", vec[i]);
	}

	printf("\n");


}

void printArray(int vec[], int size) {

	for (int i = 0; i < size; ++i) {
		printf("%d ", vec[i]);
	}

	printf("\n");
}

// You can suppose both arrays have the same size
void swapArrays(int vec1[], int vec2[], int size)
{
	for (int i = 0; i < size; ++i) {
		int aux = vec1[i];
		vec1[i] = vec2[i];
		vec2[i] = aux;
	}
}


int main()
{
	/*int vec1[] = { 1, 1, 1 };
	int vec2[] = { 2, 2, 2 };

	printf("Arrays before the swap\n");
	printf("vec1\n");
	printArray(vec1, 3);
	printf("vec2\n");
	printArray(vec2, 3);

	swapArrays(vec1, vec2, 3);

	printf("Arrays after the swap\n");
	printf("vec1\n");
	printArray(vec1, 3);
	printf("vec2\n");
	printArray(vec2, 3);*/

	int arr[] = { -99, 1, 7, -21 };
	/*int res = maxVec(arr, 4);
	printf("Max is : %d", res);*/

	
	printf("Min is : %d", minVec(arr, 4));

	return 0;
}
