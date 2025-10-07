// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    float Celsius, Fahrenheit;
    char response;
    printf("tool: F to C converter \n");
    printf("Input Fahrenheit \n");
    scanf("%f", &Fahrenheit);
    Celsius = (Fahrenheit-32)*5/9;
    printf("%.2f Farenheit =%.2f Celsius\n", Fahrenheit, Celsius);

    getchar();
    getchar();
    
    
    
    
    
    
    return 0;
}