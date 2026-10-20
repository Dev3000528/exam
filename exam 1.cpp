#include <stdio.h>

int main() {
    int num, i;
    long fact = 1;

    printf("Enter an integer: ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++) {
        fact = fact * i;
    }

    printf("Factorial = %ld\n", fact);
}
//Enter an integer: 5
//Factorial = 120