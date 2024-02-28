#include <stdio.h>

const double Pi = 355.0 / 113.0;

int main(int argc, char** argv) {
    printf("Hello, this is the Pi Program\n");
    printf("Pi is about %.15f\n", Pi);
    double multiplier;
    printf("Please enter how much to multiply Pi by\n");
    int parseCount = scanf("%lf", &multiplier); 
    if (parseCount != 1) {
        printf("Incorrect input, please type a number\n");
        return 1;
    } else {
        double manyPi = multiplier * Pi;
        printf("Pi multiplied by %.15f is %.15f\n", multiplier, manyPi); 
    }
    return 0;
}

