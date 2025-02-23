#include <stdio.h>

int main() {
    // Declare a floating-point variable
    float num;

    // Prompt user for input
    printf("Enter a floating-point number: ");
    
    // Take input from user
    scanf("%f", &num);

    // Print the input number
    printf("You entered: %.2f\n", num);

    return 0;
}
