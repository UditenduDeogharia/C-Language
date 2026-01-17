#include<stdio.h>
int main () {
    int n;
    do {
    printf("ENTER A NUMBER : ");
    scanf("%d",&n);
    printf("%d\n",n);
    if (n%2!=0) {
        break;
    }
    }while (1);
    printf("NOW ITS A ODD NUMBER\n");
    return 0;
}