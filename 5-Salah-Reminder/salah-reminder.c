#include <stdio.h>
int main(){

    int time;

    printf("Enter the current time(0-23):");
    scanf("%d", &time);

    if( time >= 4 && time <=5){
        printf("\n It's time for Fajar. \n");
    }
    else if( time > 5 && time < 12){
        printf("\n It's time for Salatut-Duha. \n");
    }
    else if( time >= 12 && time <=16){
        printf("\n It's time for Jahar. \n");
    }
    else if( time > 16 && time <= 18){
        printf("\n It's time for Asar. \n");
    }
    else if( time >= 19 && time < 20){
        printf("\n It's time for Maghrib. \n");
    }
    else if( time >= 20 && time <= 23 || time >= 0 && time <=3){
        printf("\n It's time for Esha. \n");
    }
    else{
        printf("This time is not for Salah");
    }
    return 0;
}
