#include <stdio.h>

void main()
    {
    int start, accel, adder, z, realz;

    scanf("%d %d", &start, &accel);
    int vel, displ;

    for(int i = 1; i <= 5; i++){
        vel = start + (accel * i);
        displ = ((vel + start) * i ) / 2;
        printf("%d, ", displ);
    }
}