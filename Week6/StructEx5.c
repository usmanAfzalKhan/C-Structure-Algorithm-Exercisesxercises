#include <stdio.h>

typedef struct {
	char name[50];
	int id;
	double GPA;
} Student;

void printStudent(Student st);

int main(int argc, char** argv) {
	const int size = 3;
	Student st[size]; //List of Students

	for(int i = 0; i < size; i++) {
		printf("Please enter the student's name, ID and GPA: ");
		scanf("%s%d%lf", st[i].name, &st[i].id, &st[i].GPA);
	}

	for(int i = 0; i < size; i++) {
		printStudent(st[i]);
	}
}

void printStudent(Student st) {
	printf("\nThe student info is: %s, %d, %.2f", st.name, st.id, st.GPA);
}