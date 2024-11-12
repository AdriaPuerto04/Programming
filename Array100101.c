#include <stdio.h>

void segZeroAndOne(int arr1[], int size_arr)
{
	int ctr = 0;

	for (int i = 0; i < size_arr; i++) {
		if (arr1[i] == 0)
			ctr++;
	}
	for (int i = 0; i < ctr; i++) {
		arr1[i] = 0;
	}
		

	for (int i = ctr; i < size_arr; i++) {
		arr1[i] = 1;
	}
		
}


int main() {

	// Ex 3
	int vec3[] = { 1, 0, 1, 0, 0, 1, 0, 1, 1 };
	int sizeVec3 = sizeof(vec3) / sizeof(vec3[0]);

	printf("\n-- Segregate 0s and 1s --\n");
	printf("The given array is:  ");
	for (int i = 0; i < sizeVec3; ++i)
	{
		printf("%d  ", vec3[i]);
	}
	printf("\n");

	printf("The array after segregation is: \n");
	segZeroAndOne(vec3, sizeVec3);
	for (int i = 0; i < sizeVec3; ++i)
	{
		printf("%d  ", vec3[i]);
	}
	printf("\n");


	return 0;
}
