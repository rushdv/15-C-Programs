#include <stdio.h>
int main(){

    int current_year = 2025;
    int age, birthyear;

    printf("Enter your birth year: ");
    scanf("%d", &birthyear);

    age = current_year - birthyear;

    printf("\n Your age is: %d \n", age);


    return 0;
}
