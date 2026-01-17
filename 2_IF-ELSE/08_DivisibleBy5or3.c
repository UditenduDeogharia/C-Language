#include<stdio.h>
int main () {
    int n;
    printf("Take a positive intiger : ");
    scanf("%d", &n);
    if (n%5==0 || n%3==0) {
    printf("N IS DIVISIBLE BY 5 OR 3\n");
    }
    else {
        printf("N IS NOT DIVISIBLE BY 5 OR 3\n");
    }
    return 0;
}