#include <stdio.h>

void main(){
    int origin, dest, fare, flag = 0;

    scanf("%d %d", &origin, &dest);

    if(origin > 3 || origin < 1){
        printf("0");
        flag = 1;
    }

    if(dest > 3 || dest < 1 && flag == 0){
        printf("0");
        flag = 1;
    }

    if(flag == 0){
        if(origin == 1){
            if(dest == 2){
                fare = 10;
            } else if(dest == 3){
                fare = 1000;
            }
            
        } else if(origin == 2){
            if(dest == 1){
                fare = 5;
            } else if(dest == 3){
                fare = 444;
            }

        } else if(origin == 3){
            if(dest == 1){
                fare = 888;
            } else if(dest == 2){
                fare = 700;
            }
        }

    printf("%d", fare);
    }
}