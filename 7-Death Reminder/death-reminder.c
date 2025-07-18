#include <stdio.h>
int main(){

    int age, ROL;
    int avgAge = 73;

    printf("Enter your age:");
    scanf("%d", &age);

    ROL = avgAge - age;

    printf("According to Bangladeshi average people, \n you have : %d", ROL);
    printf("years to live. \n \n So don't waste your time, man....");


    return 0;
}
