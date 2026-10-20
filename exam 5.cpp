#include <stdio.h>
int main() {
    int rows = 5;
    int i,sp,j;
    for ( i = 1; i <= 5; i++) {
        for ( sp = 1; sp <= 5 - i; sp++) {
            printf(" ");
        }
        for ( j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}
