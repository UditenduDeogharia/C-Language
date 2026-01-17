#include<stdio.h>
int main () {
    int a,b,c;
    printf("Take three numbers input : ");
    scanf("%d %d %d", &a,&b,&c);
    if((a+b)>c || (b+c)>a || (c+a)>b) {
        printf("THEY CAN BE THE SIDES OF TRIANGLE\n");
    }
    else {
        printf("THEY CAN'T BE THE SIDES OF TRIANGLE\n");
    }
    return 0;
}