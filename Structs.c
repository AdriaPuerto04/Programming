#include <stdio.h>


struct Student
{
	char* name;
	int age;
	float marks;
};

struct Class 
{

	char letter;
	struct Student students[2];

};


float FindAvg(struct Student student1, struct Student student2) {

	float avg = (student1.marks + student2.marks) / 2;

	return avg;

}

void PrintInfo(struct Class clas) {

	for (int i = 0; i < 2; ++i) {

		printf("Student %i's name: %s", i, clas.students[i].name);
		printf("\n");
		printf("Student %i's age: %i", i, clas.students[i].age);
		printf("\n");
		printf("Student %i's marks: %g", i, clas.students[i].marks);
		printf("\n");
		printf("\n");

	}
	
}


int main() {

	struct Student st1;

	st1.name = "Adria";
	st1.age = 18;
	st1.marks = 7.5;

	struct Student st2 = { "Borjo", 19, 5.5 };


	struct Class class1;

	class1.letter = 'A';
	class1.students[0] = st1;
	class1.students[1] = st2;

	PrintInfo(class1);
	printf("\n");
	printf("The average of Class %c is: %g", class1.letter, FindAvg(st1, st2));

}

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include <stdio.h>

struct book {

	char* title;
	char* author;
	float price;
};

struct batch {
	char* name;
	struct book batch[5];
};

void PrintInfo(struct batch batch) {
	
	for (int i = 0; i < 5; ++i) {

		printf("Title: '%s'", batch.batch[i].title);
		printf("\n");
		printf("Author: %s", batch.batch[i].author);
		printf("\n");
		printf("Price: %g", batch.batch[i].price);
		printf("\n");
		printf("\n");
	}

}

int FindMost(struct batch batch) {

	int most = 0;

	for (int i = 0; i < 5; ++i) {
		if (batch.batch[i].price > batch.batch[i+1].price && batch.batch[i].price > batch.batch[most].price) {
			most = i;
		}
	}

	return most;

}

int FindLowest(struct batch batch) {

	int least = 0;

	for (int i = 0; i < 5; ++i) {
		if (batch.batch[i].price < batch.batch[i + 1].price && batch.batch[i].price < batch.batch[least].price) {
			least = i;
		}
	}

	return least;

}

int main() {

	struct book book1 = { "The Lord Of The Rings", "J.R.R Tolkien", 17.99 };
	struct book book2 = { "El Pirata Garrapata", "Ni puta idea", 0.99 };
	struct book book3 = { "Charlie And The Chocolate Factory", "Roald Dahl", 15 };
	struct book book4 = { "The Divine Comedy", "Dantes", 100.99 };
	struct book book5 = { "Around the World in Eighty Days", "Joules Verne", 13.30 };

	struct batch batch1;
	batch1.name = "classics";
	batch1.batch[0] = book1;
	batch1.batch[1] = book2;
	batch1.batch[2] = book3;
	batch1.batch[3] = book4;
	batch1.batch[4] = book5;

	PrintInfo(batch1);
	printf("\n");
	printf("The most expensive book is: ");
	printf("\n");
	printf("%s by %s", batch1.batch[FindMost(batch1)].title, batch1.batch[FindMost(batch1)].author);
	printf("\n");
	printf("\n");
	printf("The least expensive book is: ");
	printf("\n");
	printf("%s by %s", batch1.batch[FindLowest(batch1)].title, batch1.batch[FindLowest(batch1)].author);
	printf("\n");

}
