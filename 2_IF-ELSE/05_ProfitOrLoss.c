#include<stdio.h>
    int main () {
    int cp,sp;
    printf("Enter the Cost value: ");
    scanf("%d", &cp);
    printf("Enter the Sell value: ");
    scanf("%d", &sp);
    if (cp<sp){
        printf("PROFIT IS : %d Rs.\n", sp-cp);
    }
    else {
        printf("LOSS IS : %d Rs.\n", cp-sp);
    }
    return 0;
}