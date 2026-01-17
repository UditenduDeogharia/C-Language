#include<stdio.h>
int main () {
    int grade;
    printf("Enter the grade : ");
    scanf("%d", &grade);
    if (grade>=90 && grade<=100) {
        printf("EXCELLENT\n");
    }
    else if (grade>= 80 && grade < 90) {
        printf("VARY GOOD\n");
    }
    else if (grade>= 70 && grade < 80) {
        printf("GOOD\n");
    }
    else if (grade >= 60 && grade < 70) {
        printf("CAN DO BETTER\n");
    }
    else if (grade >= 50 && grade < 60) {
        printf("AVERAGE\n");
    }
    else if (grade >= 40 && grade < 50) {
        printf("BELLOW AGVERAGE\n");
    }
    else {
        printf("FAIL\n");
    }
    return 0;
}