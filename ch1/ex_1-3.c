#include <stdio.h>

int main(void)
{
    float fahr, celsius;
    float lower, upper, step;
    
    lower = 0;
    upper = 300;
    step = 20;
    fahr = 0;
    
    printf("Fahrenheit  Celsius\n");
    while(fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%10.0f %8.1f\n", fahr, celsius);
        fahr += step;
    }
}