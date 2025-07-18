#include <stdio.h>
int main(){

    int topic;

    printf("Select a topic from the list below: \n");
    printf("1. Data Structures \n");
    printf("2. Circuit Theory \n");
    printf("3. Thermodynamics \n");
    printf("4. Operating System \n");
    printf("5. Digital Logic \n");
    printf("6. Mechine Design \n");
    printf("7. Database Management System \n");

    printf("\n Enter your chosen topic number (1-7):");
    scanf("%d", &topic);

    if(topic == 1 || topic == 4 || topic ==7){
        printf("\n You are probably from the CSE Department \n");
    }
    else if(topic == 2 || topic == 5){
        printf("\n You are probably from the EEE Department \n");
    }
    else if(topic == 3 || topic == 6){
        printf("\n You are probably from the ME Department \n ");
    }
    else {
        printf("Invalid choice. Please choose from 1 to 7.\n");
    }



    return 0;
}
