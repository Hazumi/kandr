#include <stdio.h>

int main(void)
{
    float fahr, celsius;
    float lower, upper, step;
    
    lower = 0;
    upper = 300;
    step = 20;
    celsius = 0;
    
    printf("Cel   Fahr\n");
    while(celsius <= upper) {
        fahr = (celsius + 32) * 5.0 / 9.0;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius += step;
    }
}