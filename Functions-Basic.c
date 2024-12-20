// ****** Functions *******

#include <stdio.h>

void ex1() 
{
	//Print on the screen the sum of two numbers	
	int val1, val2;
	
	printf("Introduce the first number:\n");
	scanf_s("%d", &val1);

	printf("Introduce the second number:\n");
	scanf_s("%d", &val2);

	printf("%d + %d = %d\n", val1, val2, val1 + val2);
}

void ex2() 
{
	//Print on the screen the average of two people	
	int age1, age2;

	printf("Introduce the age of the first person:\n");
	scanf_s("%d", &age1);

	printf("Introduce the age of the second person:\n");
	scanf_s("%d", &age2);

	printf("Their average age is %f\n", (age1 + age2) / 2.0f);
}

void ex3()
{
	int age;
	printf("Introduce your age:\n");
	scanf_s("%d", &age);

	printf("Max. heart rate =  %f\n", (220 - age) / 10.0f);
}

void ex4()
{
	int life;
	printf("Introduce the life of the player in the range [0, 100]:\n");
	scanf_s("%d", &life);

	float incrLife = life * 0.25f;
	float lifeUpdated = life + incrLife;
	
	if (lifeUpdated > 100.0f) {
		lifeUpdated = 100.0f;
	}
	printf("Life of the player after increasing it 25%: %f\n", lifeUpdated);
}

int main() 
{
	ex1();
	printf("\n");
	
	ex2();
	printf("\n");
	
	ex3();
	printf("\n");
	
	ex4();
	printf("\n");

	return 0;
}
//----------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------

// ****** solution to the cells problem *******

#include <stdio.h>


int numCells(float w, float h) {
	// Each cell is 0.6 x 0.6 m
	
	int wCells = w / 0.6f;
	int hCells = h / 0.6f;

	int numCells = wCells * hCells;
	
	return numCells;
}


int main() 
{
	
	float width;
	printf("Introduce the width of the room (floating point number):\n");
	scanf_s("%f", &width);

	float height;
	printf("Introduce the height of the room (floating point number):\n");
	scanf_s("%f", &height);

	printf("%d\n", numCells(width, height));
	

	return 0;
}


//----------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------

int hmw6() {

	int a = 1, b = 3;
	char c = "a", d = "d";
	double x = 0.0, y = 1.2;
	char s1 = "aab", s2 = "ccd";

	printf("%d\n", a > 1 && b < 2); // false 0
	printf("%d\n", c == 'z' && d == 'd'); //false 0
	printf("%d\n", c != 'a' && d != 'd'); //true1
	printf("%d\n", a == 1 && b == 3); //true 1
	printf("%d\n", s1 > "aaa" && s1 < "zzz"); //false 0
	printf("%d\n", s1 != s2 && s1 + "b" == "aabb"); //false 0
	printf("%d\n", a / b == 0 && a % b == 0); //false 0
	

}






int main()
{

	hmw6();

	return 0;
}
