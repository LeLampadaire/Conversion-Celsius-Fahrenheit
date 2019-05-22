#include <stdio.h>
#include <stdlib.h>

int main(){
    float TemperatureCelsius, TemperatureFahrenheit;

    printf("Encodez la temperature en Fahrenheit : ");
    scanf("%f",&TemperatureFahrenheit);

    TemperatureCelsius = (TemperatureFahrenheit - 32) * 5/9;
    printf("\n-> La temperature en Celsius vaut : %.2f\n", TemperatureCelsius);

    return 0;
}
