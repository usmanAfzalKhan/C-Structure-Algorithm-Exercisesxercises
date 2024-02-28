#include <stdio.h>

typedef struct {
	char first[21];
	char middle;
	char last[21];
} Name;

typedef struct {
	int day;
	int month;
	int year;
} Date;

typedef struct {
	Name name;
	int id;
	double GPA;
	Date birthDate;
} Student;

void printStudent(Student st);

int main(int argc, char** argv) {
	Student st;

	printf("Please enter the student's name (first, middle initial, last), ID and GPA, birthdate (day, month, year): ");
	scanf("%s %c %s %d %lf %d %d %d", st.name.first, &st.name.middle, st.name.last, &st.id, &st.GPA, &st.birthDate.day, &st.birthDate.month, &st.birthDate.year);

	printStudent(st);

}

void printStudent(Student st) {
	printf("\nThe student info is: %s, %c, %s, %d, %g, %d/%d/%d\n", st.name.first, st.name.middle, st.name.last, st.id, st.GPA, st.birthDate.day, st.birthDate.month, st.birthDate.year);
}