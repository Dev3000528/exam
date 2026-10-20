#include <stdio.h>
int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1; 
    }
    
}

int main() {
    int year;
    
    printf("Enter a year: ");
    scanf("%d", &year);
    
    if (isLeapYear(year)) {
        printf("%d is a  leap year.\n", year);
    } else {
        printf("%d is not leap year.\n", year);
    }
    
}
/*
Enter a year: 2006
2006 is a  leap year.