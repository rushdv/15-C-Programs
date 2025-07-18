#include <stdio.h>
int main(){

    float height;
    float heightF = 1.60 ;

    printf("Enter your height in meter: ");
    scanf("%f", &height);

    if( height >= heightF){
        printf("\n Your height is OK for army selection. \n");
    }
    else{
        printf("\n Your height is not maching. \n");
    }


    return 0;
}
