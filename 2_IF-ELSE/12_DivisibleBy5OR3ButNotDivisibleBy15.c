#include<stdio.h>
int main () {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    if(n%5==0 || n%3==0) {
        if (n%15!=0) { 
            printf("THE NUMBER IS DIVISIBLE BY 5 OR 3\n");
    }
    else {
        printf("THE NUMBER IS DIVISIBLE BY 15\n");
    }
    }
    else {
        printf("THE NUMBER IS NOT DIVISIBLE BY 5 OR 3\n");
    }
    return 0;
}