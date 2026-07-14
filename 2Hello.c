#include <stdio.h>

int main() {
    // Q5: Write a program to Find sum of digits of a number. (TCS, Infosys, Wipro)

    int num, sum = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;   // Get last digit
        sum += digit;       // Add digit to sum
        num /= 10;          // Remove last digit
    }

    printf("Sum of digits = %d\n", sum);
    
    #include <stdio.h>


    // Q6: Write a program to Reverse a number. (TCS, Infosys, Wipro)

    int  rev = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;        // Get last digit
        rev = rev * 10 + digit;  // Build reversed number
        num /= 10;               // Remove last digit
    }

    printf("Reversed number = %d\n", rev);
    

    // Q7: Write a program to Find product of digits. (TCS, Infosys, Wipro)

    int  product = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;     // Get last digit
        product *= digit;     // Multiply with product
        num /= 10;            // Remove last digit
    }

    printf("Product of digits = %d\n", product);
    

    // Q8: Write a program to Check whether a number is palindrome. (TCS, Infosys, Wipro)

    int  temp ;
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;  // Store original number

    while (num > 0) {
        digit = num % 10;        // Get last digit
        rev = rev * 10 + digit;  // Build reversed number
        num /= 10;               // Remove last digit
    }

    if (temp == rev)
        printf("Palindrome number\n");
    else
        printf("Not a palindrome\n");

    return 0;
}

