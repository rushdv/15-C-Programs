#include <stdio.h>
int main(){

    float height;
    float heightM = 1.68 ;

    printf("Enter your height in meter: ");
    scanf("%f", &height);

    if( height >= heightM){
        printf("\n Your height is OK for army selection. \n");
    }
    else{
        printf("\n Your height is not maching. \n");
    }


    return 0;
}
