// to convert degree celcius into degree fahrenheit.

#include <stdio.h>

int main(){
    float celcius,fahrenheit;
    printf("Enter the temperature in celcius: ");
    scanf("%f",&celcius);
    fahrenheit = celcius * 1.8 + 32;
    printf("The temperature in fahrenheit is %f",fahrenheit);
    return 0;
}