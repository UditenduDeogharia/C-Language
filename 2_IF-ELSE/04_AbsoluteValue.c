#include<stdio.h>
int main () {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n < 0) {
        n = n * (-1);
        printf("The Absolute Value Is: %d\n", n);  
    } else {
        printf("The Absolute Value Is: %d\n", n);
    }
    return 0;
}