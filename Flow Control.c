// ****** Flow control - if /else if / else - switch *******

#include <stdio.h>



int main() {


	int num1, num2;

	printf("Enter a number:\n");
	scanf_s("%i", &num1);
	printf("Enter another number:\n");
	scanf_s("%i", &num2);


	if (num1 > num2) {

		printf("%i is bigger than %i, good job", num1, num2);
	}
	else if(num1 < num2) {

		printf("%i is smaller than %i, good job", num1, num2);
	}
	else if (num1 == num2) { //can use "else"

		printf("%i and %i are equal, good job", num1, num2);
	}

	return 0;

}

//----------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------


#include <stdio.h>

void hmw4() {
//Exercice capital letter to lower case letter and viceversa
	char letter;

	printf("Introduce a letter:\n");
	scanf_s("%c", &letter, 1);
	
//ascii table

	if (letter >= 65 && letter <= 90) {

		//capital letter
		printf("%c\n", letter + 32);
	}
	else if (letter >= 97 && letter <= 122) {
		//lower case letter
		printf("%c\n", letter - 32);

	}
	else {
		//invalid input
		printf("Error: invalid input");
	}
}




void hmw8() {
//zone exercice
	float posX, posY;

	printf("Enter your position in the X axis:\n");
	scanf_s("%f", &posX);
	printf("Enter your position in the Y axis:\n");
	scanf_s("%f", &posY);


	if (posX > 1.0f || posY > 1.0f) || (posX < 0.0f || posY < 0.0f) {

		printf("You are outside the zone mafaka!");

	}
	else {

		printf("You are in the zone, congrats!");

	}

}



int main()
{

	hmw4();

	return 0;
}
