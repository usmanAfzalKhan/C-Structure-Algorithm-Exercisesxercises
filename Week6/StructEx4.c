#include <stdio.h>

typedef struct {
	char name[50];
	int id;
	double GPA;
} Student;

void printStudent(Student st);

int main(int argc, char** argv){
	Student st;
	
	printf("Please enter the student's name, ID and GPA: ");
	scanf("%s%d%lf", st.name, &st.id, &st.GPA);
	
	printStudent(st);
	
}

void printStudent(Student st){
	printf("\nThe student info is: %s, %d, %.2f", st.name, st.id, st.GPA);
}