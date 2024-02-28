#include <stdio.h>
#include <string.h>

void myStrcpy(char dest[], const char src[]);

int main(int argc, char** argv) {
    const int size = 256;
    char src[size];
    char dest[size];

    myStrcpy(dest, src);

    printf("%s\n", dest);

    return 0;
}

void myStrcpy(char dest[], const char src[]) {
    printf("Please enter a string: ");
    scanf("%s", src);
    strcpy(dest, src);
}
