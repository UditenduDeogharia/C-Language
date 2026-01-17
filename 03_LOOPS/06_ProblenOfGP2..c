#include<stdio.h>
int main () {
    int i,n;
    printf("ENTER A NUMBER : ");
    scanf("%d", &n);
    //GP= an th form = ar^(n-1)
    //r = comman ratio
    //3,12,48........n
    int a=3;
    for(i=1 ; i<=n ; i++) {
    printf("%d\n", a);
      a=a*4;
    }
    return 0;
}