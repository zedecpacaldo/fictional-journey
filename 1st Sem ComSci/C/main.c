#include <stdio.h>

int main()
{
    int colorCode = 0, r = 0, g = 0, b = 0;

    printf("Please enter the Color Code: ");
    scanf("%d", &colorCode);

    if(colorCode > 999999 || colorCode <100000){
        printf("Invalid Color Code.");
        return 0;
    }
    r = colorCode/10000;
    g = (colorCode%10000)/100;
    b = colorCode%100;

    if(r>g && r>b){
        printf("Red is Dominant.");
    } else if(g>r && g>b){
        printf("Green is Dominant.");
        } else if(b>g && b>r){
            printf("Blue is Dominant.");
            } else {
                printf("Invalid Color Code.");
                }
    return 0;
}
