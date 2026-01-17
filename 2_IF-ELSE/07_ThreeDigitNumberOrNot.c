#include<stdio.h>
int main () {
    int n;
    printf("Enter a digit : ");
    scanf("%d", &n);
    if (99<n && n<1000) {
        printf("N IS A THREE DIGIT NUMBER\n");
    }
    else {
        printf("N IS NOT A THREE DIGIT NUMBER\n");
    }
    return 0;
}