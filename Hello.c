//Sum of first N natural numbers
#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter N: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Sum = %d\n", sum);



// Multiplication table of a given number
 
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    // Factorial of a number
    int fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    printf("Factorial = %d\n", fact);

   //Count digits in a number
   
    int count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    while(num != 0) {
        num /= 10;
        count++;
    }

    printf("Number of digits = %d\n", count);

    return 0;
}

