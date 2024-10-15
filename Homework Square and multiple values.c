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

//----------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------


#include <stdio.h>

void FirstAndLastMultipleInRange(int val, int min, int max) {
	if (val <= max && val >= min){
		for (int num = min; num < max; num++) {

			if (val % num == 0){

			printf("%i", num);
				if (num < val) {
					printf(", ");

				}
				else if (num == val) {
					printf(".");

				}

			}
		
		}
	}
	else {
		printf("%i is not in the range!", val);
	}
	
}



int main() 
{

	int vorp, max, min;

	printf("Type a number:\n");
	scanf_s("%i", &vorp);

	printf("Enter the MINIMUM number in the range:\n");
	scanf_s("%i", &min);

	printf("Enter the MAXIMUM number in the range:\n");
	scanf_s("%i", &max);


	FirstAndLastMultipleInRange(vorp, min, max);

	return 0;
}
