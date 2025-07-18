#include <stdio.h>
int main(){

    float SSC, HSC, result;

    printf("Enter your SSC GPA: ");
    scanf("%f", &SSC);

    printf("Enter your HSC GPA: ");
    scanf("%f", &HSC);

    result = SSC + HSC;

    if(result >= 9){
        printf("\n Your Grade Point is okay for MAT. \n");
    }
    else{
        printf("\n Your GPA is low. You have to improve. \n");
    }


    return 0;
}
