#include <stdio.h>

void main(){
    double input;
    double output, output1, output2, x;
    int test, y;

    scanf("%lf", &input);
    
    test = input * 100; 
    output1 = test/100;
    output2 = input-output1; 
    y = test % 100;
    x = y*0.01;
    output2 = output2 - x;
    printf("%f", output2);

}