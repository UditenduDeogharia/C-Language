#include<stdio.h>
int main (){
float principle,rate,time,si;
printf("Enter value of principle :",principle);
scanf("%f",&principle);
printf("Enter value of rate :",rate);
scanf("%f",&rate);
printf("Enter value of time  :",time );
scanf("%f",&time);
si  = (principle * rate * time )/100;
printf("The value of simple  Interest:%f ",si);
   return 0;
}