#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int time;


    printf("Please enter time in seconds: ");
    scanf("%d", &time);

    int hours = time/3600;
    int minutes = (time%3600)/60;
    int seconds = ((time%3600)%60);

    printf("\nTime is %d hours, %d minutes, and %d seconds.", hours, minutes, seconds);
    return 0;
}

