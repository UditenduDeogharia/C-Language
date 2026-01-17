#include<stdio.h>
int main () {
    int A,B,C;
    printf("Enter RAM's Age : ");
    scanf("%d", &A);
    printf("Enter SHYAM's Age : ");
    scanf("%d", &B);
    printf("Enter AJAY's Age : ");
    scanf("%d", &C);
    if(A<B && A<C) {
        printf("RAM IS YOUNGEST\n");
    }
    else if (B<A && B<C) {
        printf("SHYAM IS YOUNGEST\n");
    }
    else {
        printf("AJAY IS YOUNGEST\n");
    }
    return 0;
}