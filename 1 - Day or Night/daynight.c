#include <stdio.h>
int main(){

    int hour;

    printf("Enter the current hour (o-23):");
    scanf("%d", &hour);

    //printf("Current Time: %d\n", hour);

    if(hour >= 6 && hour < 18){
        printf("It's Day \n");
    }
    else{
        printf("It's Night \n");
    }

    return 0;
}
