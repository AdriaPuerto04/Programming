#include <stdio.h>

void PrintRandSquare(int lines) {

	
	for (int count = 0; count < lines; count++){

		printf("\n");

		for (int count = 0; count < lines; count++) {

		printf("-");

		}
	}

}



int main() 
{

	int lines;
	printf("Enter the number of lines you want for the square:\n");
	/*
	example:  2 lines
	--  <-- line
	--
	*/
	scanf_s("%i", &lines);
	PrintRandSquare(lines);

	return 0;
}
