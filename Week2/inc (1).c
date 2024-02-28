#include <stdio.h>

int main(int argc, char** argv)
{
	int c;

	printf("Test post-increment:\n");
	c = 5;
	printf("%d\n", c);
	printf("%d\n", c++);
	printf("%d\n", c);

	printf("Test pre-increment:\n");
	c = 5;
	printf("%d\n", c);
	printf("%d\n", ++c);
	printf("%d\n", c);
	
	printf("Playing with characters:\n");
	char letter = 'b';
	printf("%c, %d\n", letter, letter);
	letter--;
	printf("%c\n", letter);
	letter = 90;
	printf("%c\n", letter);

	return 0;
}
