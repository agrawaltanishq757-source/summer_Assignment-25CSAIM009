#include <stdio.h>

int main() {
    int num, i, flag, start, end, a, b, gcd, lcm;

    // Q9: Write a program to Check whether a number is prime. (TCS, Infosys, Wipro)
    printf("Enter a number to check prime: ");
    scanf("%d", &num);
    flag = 0;
    if (num <= 1) {
        flag = 1; // Not prime
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                flag = 1;
                break;
            }
        }
    }
    if (flag == 0)
        printf("%d is a Prime number\n", num);
    else
        printf("%d is Not a Prime number\n", num);

    // Q10: Write a program to Print prime numbers in a range. (TCS, Infosys, Wipro)
    printf("\nEnter range (start and end): ");
    scanf("%d %d", &start, &end);
    printf("Prime numbers between %d and %d are: ", start, end);
    for (num = start; num <= end; num++) {
        if (num <= 1) continue;
        flag = 0;
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            printf("%d ", num);
    }
    printf("\n");

    // Q11: Write a program to Find GCD of two numbers. (TCS, Infosys, Wipro)
    printf("\nEnter two numbers to find GCD: ");
    scanf("%d %d", &a, &b);
    gcd = 1;
    for (i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0)
            gcd = i;
    }
    printf("GCD of %d and %d = %d\n", a, b, gcd);

    // Q12: Write a program to Find LCM of two numbers. (TCS, Infosys, Wipro)
    lcm = (a * b) / gcd;  // Formula: LCM × GCD = a × b
    printf("LCM of %d and %d = %d\n", a, b, lcm);

    return 0;
}
