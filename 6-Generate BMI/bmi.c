#include <stdio.h>
int main(){

    float height, weight, BMI;

    printf("Enter your height in meter:");
    scanf("%f", &height);
    printf("Enter your weight in kg:");
    scanf("%f", &weight);

    BMI = weight / (height * height);

    printf("\n Your BMI is: %f \n", BMI);

    return 0;
}
