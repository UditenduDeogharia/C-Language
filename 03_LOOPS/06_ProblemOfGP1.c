#include<stdio.h>
int main () {
    int i,n;
    printf("ENTER A NUMBER : ");
    scanf("%d", &n);
    //GP= an th form = ar^(n-1)
    //r = comman ratio
    //1,2,4,8,16,32...........n
    int a=1;
    for(i=1 ; i<=n ; i++) {
        a=a*2;
        printf("%d\n", a);
    }
    return 0;
}