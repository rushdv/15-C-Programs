#include <stdio.h>
int main(){

    char name[50];
    char town[50];
    char department[50];
    char hobby[50];
    char varsity[50];

    printf("Type your name:");
    scanf("%s", name);
    printf("Your Hometown:");
    scanf("%s", town);
    printf("Your Department:");
    scanf("%s", department);
    printf("Which varsity:");
    scanf("%s", varsity);
    printf("Your Hobby:");
    scanf("%s", hobby);

    printf("\n\n\n ===== My Introduction ===== \n \n");
    printf("Hi! I'm %s.", name);
    printf("I'm from %s.", town);
    printf("Now I am studying in Department of %s ", department);
    printf("at %s.", varsity);
    printf("In my free time, I like to do %s. \n\n\n", hobby);

    return 0;
}
