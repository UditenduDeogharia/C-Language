#include<stdio.h>
int main () {
    //output-if usar put n=4 (1+2+3+4=10)
    int n;
    printf("ENTER A NUMBER: ");
    scanf("%d",&n);
    int sum=0;
    int i=1;
    do{
        sum=sum+i;
        i++;
    }while(i<=n);
    printf("%d ",sum);
}