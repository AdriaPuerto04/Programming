// ****** Homework 15/10/24 *******


#include <stdio.h>
//ask for a min, max and a num and check if the num is in the given range

int IsInRange(int min, int max, int num) {

	if (num >= min && num <= max) {
		return 1;
	}
	else
	{
		return 0;

	}
}

int main()
{
	int min, max, val;

	printf("Introduce min:\n");
	scanf_s("%d", &min);

	printf("Introduce min:\n");
	scanf_s("%d", &max);

	printf("Introduce val:\n");
	scanf_s("%d", &val);

	int res = IsInRange(min, max, val);
	printf("Is %d in [%d, %d]? %d\n", val, min, max, res);

	return 0;
}

//----------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------

#include <stdio.h>


void PrintRangeReverse(int min, int max) {

	for (int cnt = max; cnt >= min; cnt--) {
		printf("%d ", cnt);
	}
}


int main()
{

	PrintRangeReverse(0, 20);

	return 0;

}

