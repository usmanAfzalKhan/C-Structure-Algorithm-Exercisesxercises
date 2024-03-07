
#include <stdio.h>
#include <stdbool.h>

int main (int argc, char** argv) {
    bool cont = true;
    
    while (cont) {
        char ch;
        printf("Please enter a comment: ");
        scanf(" %c", &ch);
        
        switch (ch) {
            case 'a':
                printf("Executing command a\n");
                break;
            case 'b':
                printf("Executing command b\n");
                break;
            case 'c':
                printf("Executing command c\n");
                break;
            case 'q':
                printf("Executing command quit\n");
                cont = false;
                break;
            default:
                printf("Default case\n");
                break;
        }
        
        if (ch == 'q') {
            break;
        }
        
        printf("This code runs after the switch.\n");
        printf("This should not run when the user types q\n");
    }
    return 0;
}
