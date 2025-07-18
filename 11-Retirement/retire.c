#include <stdio.h>
int main(){

    int retire = 59;
    int age , left ;

    printf("Enter your current age: ");
    scanf("%d", &age);

    left = retire - age;

    printf("\n You have %d years left to retire. \n", left);

    return 0;
}
