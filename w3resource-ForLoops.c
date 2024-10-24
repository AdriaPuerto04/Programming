// https://www.w3resource.com/c-programming-exercises/for-loop/index.php
// C Programming Exercises, Practice, Solution : For Loop

#include <stdio.h>

void ex1() {
	/* 1. Write a program in C to display the first 10 natural numbers.
		Expected Output :
			1 2 3 4 5 6 7 8 9 10    */

	int num = 10;

	for (int count = 1; count <= num; count++) {
		
		printf("%i ", count);

	}

}

void ex2and3() {

	/* 2. Write a C program to compute the sum of the first 10 natural numbers.
		Expected Output :
			The first 10 natural number is :
			1 2 3 4 5 6 7 8 9 10
			The Sum is : 55      */

	/* 3. Write a program in C to display n terms of natural numbers and their sum.
		Test Data : 7
		Expected Output :
			The first 7 natural number is :
			1 2 3 4 5 6 7
			The Sum of Natural Number upto 7 terms : 28  */

	int sum = 0, num = 7;

	for (int count = 0; count <= num; count++) {

		//variable sum for storaging a value
		sum = sum + count;
		
	}
	printf("The sum is : %i.", sum);


}

void ex4() {
	//4. Write a program in C to read 10 numbers from the keyboard and find their sum and average.

	//too ez


}

void ex5() {
	/* 5. Write a program in C to display the cube of the number up to an integer.
		Test Data :
	Input number of terms : 5
		Expected Output :
	Number is : 1 and cube of the 1 is : 1
		Number is : 2 and cube of the 2 is : 8
		Number is : 3 and cube of the 3 is : 27
		Number is : 4 and cube of the 4 is : 64
		Number is : 5 and cube of the 5 is : 125 */
	int total, num = 5;

	for (int count = 1; count <= num; ++count) {

		total = count * count * count;

		printf("Number is : %i and cube of %i is :%i\n", count, count, total);
	}
}

void ex6() {

	/*6. Write a program in C to display the multiplication table for a given integer.
		Test Data :
	Input the number(Table to be calculated) : 15
		Expected Output :
	15 X 1 = 15
		...
		...
		15 X 10 = 150*/

	int num = 15, table = 10, multres;

	for (int count = 0; count <= table; count++) {

		multres = num * count;
		printf("%i X %i = %i \n",num, count, multres);

	}

}

// 7 is the same as ex6

void ex8() {

	/* 8. Write a C program to display the n terms of odd natural numbers and their sum.
			Test Data
			Input number of terms : 10
			Expected Output :
				The odd numbers are : 1 3 5 7 9 11 13 15 17 19
				The Sum of odd Natural Number upto 10 terms : 100 */

	int terms = 10, odds, sum = 0;
	printf("odds: \n");
	for (int count = 1; count <= terms; count++) {

		odds = count * 2 - 1;
		printf("%i ", odds);
		sum = sum + odds;
	}

	printf("\nThe sum is : %i", sum);


}


int main() {


	ex8();
	

}
