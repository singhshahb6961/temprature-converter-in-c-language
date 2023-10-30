#include <stdio.h>

int main() {
    int choice;
    float temperature, convertedTemperature;

    // Prompt user for choice
    printf("Temperature Converter:\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("3. Celsius to Kelvin\n");
    printf("4. Kelvin to Celsius\n");
    printf("5. Fahrenheit to Kelvin\n");
    printf("6. Kelvin to Fahrenheit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    // Prompt user for temperature
    printf("Enter temperature: ");
    scanf("%f", &temperature);

    // Perform conversion based on user choice
    switch(choice) {
        case 1:
            // Celsius to Fahrenheit conversion
            convertedTemperature = (temperature * 9/5) + 32;
            printf("Temperature in Fahrenheit: %.2f\n", convertedTemperature);
            break;
        case 2:
            // Fahrenheit to Celsius conversion
            convertedTemperature = (temperature - 32) * 5/9;
            printf("Temperature in Celsius: %.2f\n", convertedTemperature);
            break;
        case 3:
            // Celsius to Kelvin conversion
            convertedTemperature = temperature + 273.15;
            printf("Temperature in Kelvin: %.2f\n", convertedTemperature);
            break;
        case 4:
            // Kelvin to Celsius conversion
            convertedTemperature = temperature - 273.15;
            printf("Temperature in Celsius: %.2f\n", convertedTemperature);
            break;
        case 5:
            // Fahrenheit to Kelvin conversion
            convertedTemperature = (temperature + 459.67) * 5/9;
            printf("Temperature in Kelvin: %.2f\n", convertedTemperature);
            break;
        case 6:
            // Kelvin to Fahrenheit conversion
            convertedTemperature = (temperature * 9/5) - 459.67;
            printf("Temperature in Fahrenheit: %.2f\n", convertedTemperature);
            break;
        default:
            printf("Invalid choice! Please enter a number between 1 and 6.\n");
    }

    return 0;
}
