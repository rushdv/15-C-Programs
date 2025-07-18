#include <stdio.h>
int main(){

    int time;

    printf("Enter the current time(0-23): ");
    scanf("%d", &time);

    if( time >= 6 && time <=11){
        printf("\n It's time for Breakfast. \n");
    }
    else if( time > 11 && time <= 16){
        printf("\n It's time for Launch. \n");
    }
    else if( time > 16 && time <=19){
        printf("\n It's time for Snacks. \n");
    }
    else if( time > 19 && time <= 23){
        printf("\n It's time for Dinner. \n");
    }
    else{
        printf("\n It's time to sleep \n");
    }

    return 0;
}
