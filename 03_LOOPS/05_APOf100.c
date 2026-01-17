#include<stdio.h>
int main () {
    int i,n;
    printf("ENTER THE VALUE OF n :");
    scanf("%d",&n);
    //[an=1+(n-1)*d] (a = first term , d = common difference)
    //and into the third braket is the n th number forn of a
    //100,97,94,91.......upto all positive term
    //an= 100 + (n-1) (-3) = 103-3n
    for(i=100 ; i>=103-3*n ; i=i-3) {
        if (i>=1) {
    printf("%d\n",i);
    }
    else {
        printf("NOW ITS NOT A POSITIVE NUMBER\n");
        break;
    }
}
    return 0;
}