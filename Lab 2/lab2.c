#include <stdio.h>
int main(){

    /* take two input from user , n & m ,
    find all of the numbers divisible by 3 & 7 between n and m */

    int n;
    int m, sum;

    printf("Type first value: ");
    scanf("%d", &n);

    printf("Type second value: ");
    scanf("%d", &m);

    //sum = sum + n ;

    for(int i=n; i <= m ; i++ ){
        if(i%3==0 && i%7==0){
            printf("\n the number is: %d \n", i);
        }
    }




    return 0;
}
