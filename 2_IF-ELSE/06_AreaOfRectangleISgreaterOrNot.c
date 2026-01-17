#include<stdio.h>
int main () {
    int A,P,l,b;
    printf("Enter LENGTH : ");
    scanf("%d",&l);
    printf("Enter BREADTH : ");
    scanf("%d",&b);
    A = l*b;
    P = 2*(l+b);
    printf("THE AREA OF RECTANGLE : %d\n", A);
    printf("THE PERIMETER OF RECTANGLE : %d\n", P);
    if(A>P) {
        printf("THE AREA OF RECTANGLE IS GREATER\n");
    }
    else {
        printf("THE PERIMETER OF RECTENGLE IS GREATER\n\n");
    }
        return 0;
}