//1
//Implement a program that :
//a.Asks for hour, minuts and seconds.
//b.Calls a function that transforms the input to seconds.
//c.Prints the number of seconds.

#include <stdio.h>


void Calculator(int hours, int min, int sec) {
	
	int htosec = hours * 3600.0f;
	int mtosec = min * 60.0f;

	int sectotal = htosec + mtosec + sec;
	printf("Seconds in %i hours, %i minutes and %i seconds are: %i.", hours, min, sec, sectotal);



}



int main() 
{

	int hours, min, sec;

	printf("Enter the number of Hours, minutes and seconds: \n");
	scanf_s("%i %i %i", &hours, &min, &sec);

	Calculator(hours, min, sec);


	return 0;
}


//2
/*Implement a program that :
a.Asks for an integer.
b.Calls the function absValue that computes the absolute value of an integer
c.Prints the result.*/

#include <stdio.h>


void absValue(float num) {
	
	if (num < 0) {


		printf("%g", num * -1.0f);

	}
	else {

		printf("The number is already in an absolute value.");

	}



}



int main() 
{

	float num;

	printf("Enter a number: \n");
	scanf_s("%f", &num);

	absValue(num);

	return 0;
}
