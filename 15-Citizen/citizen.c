 #include <stdio.h>
 int main(){

    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if( age >= 18){
        printf("Congrats! You are a citizen of BD");
    }
    else{
        printf("\n You are not old enough. \n");
    }


    return 0;
 }
