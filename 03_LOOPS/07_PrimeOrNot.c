#include<stdio.h>
int main () {
    int n;
    int a=0;
    printf("ENTER A NUMBER: ");
    scanf("%d", &n);
    int i;
    for(i=2 ; i<=n-1; i++) {
        if(n%i==0) {
            a=1; //a=1 akta condition dora holo jar mane n%i==0
            break;
        }
    }
    if (n==1){
    printf("1 IS NITHER PRIME NOR COMPOSITE\n");
    }
    else if (a==0) {
    printf("ENTER NUMBER IS A PRIME NUMBER\n");
    }
    else{ 
    printf("ENTER NUMBER IS NOT A PRIME NUMBER\n"); 
    }
    return  0;
}