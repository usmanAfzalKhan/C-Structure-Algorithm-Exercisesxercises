#include <stdio.h>

typedef struct {
	char name[50];
	int id;
	double GPA;
} Student;

int main(int argc, char** argv){
	Student st = {"Usman", 99150330, 3.5};
	
	printf("\nThe student info is: %s, %d, %.2f", st.name, st.id, st.GPA);
}