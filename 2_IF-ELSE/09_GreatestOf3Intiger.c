#include<stdio.h>
int main () {
    int a,b,c;
printf("Take three positive intiger : ");
scanf("%d %d %d",&a,&b,&c);
if (a>b && a>c) {
    printf("A IS THE GREATEST\n");
}
else if (b>a && b>c) {
    printf("B IS THE GREATEST\n");
}
else {
    printf("C IS THE GREATEST\n");
}
 return 0;
}