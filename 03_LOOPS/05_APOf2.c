#include<stdio.h>
int main () {
    int i,n;
    //[an=1+(n-1)*d] (a = first term , d = common difference)
    //and into the third braket is the n th number forn of a
    printf("ENTER THE VALUE OF n :");
    scanf("%d",&n);
    for(i=1 ; i<=2*n-1 ; i=i+2) {
    printf("%d\n",i);
    }
    return 0;
}