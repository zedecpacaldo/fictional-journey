#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, d, y, secondPart, formula, centuryCode, actualYear, testYear, finalizer;
    int months[] = {0,1,4,4,0,2,5,0,3,6,1,4,6};
    char* day[8] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    char* monthNames[13] = {"null", "January", "February", "March", "April",
                            "May", "June", "July", "August", "September", "October",
                            "November", "December",};

    printf("Enter Month (MM): ");
    scanf("%d", &m);
    printf("Enter Date (DD): ");
    scanf("%d", &d);
    printf("Enter Year (YYYY): ");
    scanf("%d", &y);

    secondPart = y%100;
    actualYear = y;


    if(y > 2050){
        while(y > 2050){
            y = y-400;
            }
        }

    if(y <= 1599 && y >= 1500){
        centuryCode = 0;
        } else if(y <= 1699){
            centuryCode = 6;
            } else if(y <= 1799){
                centuryCode = 4;
                } else if(y <= 1899){
                    centuryCode = 2;
                    } else if(y <= 1999){
                        centuryCode = 0;
                        } else if(y >= 2000){
                            centuryCode = 6;
                            }

    if(actualYear%4 == 0 || actualYear%100 == 0){
        if(m == 2){
            if(d > 29){
                printf("Invalid Day for the Month.");
                return 0;
                }
            } else if(d > 28){
                printf("Invalid Day for the Month.");
                return 0;
                }
            } else if(m == 4 || m == 6 || m == 9 || m == 11){
                    if(d > 30){
                        printf("Invalid Day for the Month.");
                        return 0;
                        }
                    }

    formula = (d + months[m] + centuryCode + secondPart/4 + secondPart);

    if(actualYear%4 == 0 || actualYear%100 == 0){
            if(m < 3){
                formula =  formula - 1;
            }
    } else {
        formula = formula;
        }

    finalizer = formula%7;
    /*printf("\n%d + %d + %d + %d + %d + %d", d, months[m], centuryCode, secondPart/4, secondPart, formula);*/
    printf("\n%s %d, %d is a %s.", monthNames[m], d, actualYear, day[finalizer]);
    return 0;
}
