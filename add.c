#include <stdio.h>

int main() 

{
    int num1, num2, num3, sum;

    // Asking for user input
    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Adding the two numbers
    sum = num1 + num2 + num3;

    // Displaying the result
    printf("Sum: %d\n", sum);

    return 0;

}
