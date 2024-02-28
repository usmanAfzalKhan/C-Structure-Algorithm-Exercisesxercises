#include <stdio.h>
#include <stdbool.h>

void fourteenBySevenLoop(void);
void eightByTwoLoop(void);
void bonus(int rows, int columns);

int main(int argc, char** argv) {
	fourteenBySevenLoop();
	printf("\n");
	eightByTwoLoop();
	printf("\n");
	/*Bonus*/
	int count = 0;
	while (true) {
		int rows, columns;
		printf("Enter the number of rows and columns (space-separated numbers): ");
		int parseCount = scanf("%d%d", &rows, &columns);

		if (parseCount != 2) {
			printf("Sorry, invalid input. Please enter two numbers separated by a space.\n");
			continue;
		}

		if (rows == 0 || columns == 0)
			break;

		bonus(rows, columns);
		printf("\n");
	}

	return 0;
}

void fourteenBySevenLoop() {
	for (int row = 1; row <= 7; row++) {
		for (int columns = 1; columns <= 14; columns++) {
			printf("O ");
		}
		printf("\n");
	}
}

void eightByTwoLoop() {
	for (int row = 1; row <= 2; row++) {
		for (int columns = 1; columns <= 8; columns++) {
			printf("X ");
		}
		printf("\n");
	}
}

void bonus(int rows, int columns) {
	for (int row = 1; row <= rows; row++) {
		for (int column = 1; column <= columns; column++) {
			printf("Y ");
		}
		printf("\n");
	}
}
