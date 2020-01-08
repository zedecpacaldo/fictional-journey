#include <stdio.h>

void main(){
    int fstart, faccel, sstart, saccel;
    scanf("%d %d %d %d", &fstart, &faccel, &sstart, &saccel);

    int fvel, fdispl, svel, sdispl;
    int f[12], s[12];

    for(int i = 1; i <= 12; i++){
        fvel = fstart + (faccel * i);
        fdispl = ((fvel + fstart) * i ) / 2;
        f[i-1] = fdispl;
    }

    for(int i = 1; i <= 12; i++){
        svel = sstart + (saccel * i);
        sdispl = ((svel + sstart) * i ) / 2;
        s[i-1] = 100 + sdispl;
    }

    int j = 0;
    
    while (f[j] < s[j])
    {
        printf("f: %d s: %d\n", f[j], s[j]);
        j++;
    }
    printf("f: %d s: %d\n", f[j], s[j]);
    j++;

    if(j > 9){
        printf("You sure you got the faster raceship?");
    } else {
        printf("seconds: %d", j);
    }
}
