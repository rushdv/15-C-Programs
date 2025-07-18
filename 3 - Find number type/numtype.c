#include <stdio.h>
int main(){

    int num;

    printf("Enter a number:");
    scanf("%d", &num);

    if(num%2 == 0){
        printf("You entered an even number.");
    }
    else{
        printf("You entered an odd number.");
    }


    return 0;
}
