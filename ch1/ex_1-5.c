#include <stdio.h>

int main(void)
{
    float celsius;
    
    printf("Fahrenheit  Celsius\n");
    for(float i = 300; i > 0; i -= 20) {
        celsius = (5.0 / 9.0) * (i - 32.0);
        printf("%10.0f %8.1f\n", i, celsius);
    }
}