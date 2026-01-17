#include<stdio.h>
int main () {
int a,b,c,r;
printf("Enter first number :");
scanf("%d", &a);
printf("Enter second number :");
scanf("%d", &b);
c=a/b;
r=a-(b*c);
printf("The remainder is :",r);

    return 0;
}