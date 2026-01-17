#include<stdio.h>
int main () {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if((year%4==0 && year%100!=0) || (year%400==0)) {
                printf("THE YEAR IS A LEAP YEAR\n");
    }
    else {
        printf("THE YEAR IS NOT A LEAP YEAR\n");
    }
    return 0;
}