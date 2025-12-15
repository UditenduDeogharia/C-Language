#include<stdio.h>
int main () {
    float a;
    printf("Enter value of a (in fraction): ");
    scanf("%f", &a);
    int b;
    printf("Enter value of b : ");
    scanf("%d", &b);
    float c;
    c = a - b;
    printf("The fractional part is : %f",c);
    return 0;
}