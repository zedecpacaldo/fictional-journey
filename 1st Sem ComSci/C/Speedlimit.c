#include <stdio.h>

void main(){
    int choice, speed, flag = 0, decision;

    scanf("%d %d", &choice, &speed);

    if(choice > 4 || choice < 1){
        printf("0");
        flag = 1;
    }

    if(speed < 0 && flag == 0){
        printf("0");
        flag = 1;
    }

    if(flag == 0){
        if(choice == 1){
            if(speed <= 258.33){
                decision = 0;
            } else{
                decision = 1;
            }
            
        } else if(choice == 2){
            if(speed <= 340.29){
                decision = 0;
            } else{
                decision = 1;
            }

        } else if(choice == 3){
            if(speed <= 36000){
                decision = 0;
            } else{
                decision = 1;
            }

        } else if(choice == 4){
            if(speed <= 299792458){
                decision = 0;
            } else{
                decision = 1;
            }
        }

        if(decision == 0){
            printf("within speed limit");
        } else {
            printf("overspeeding!");
        }
    }
}