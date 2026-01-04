#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 60  // maximum digits + some buffer

// Function prototypes
void add(char *num1, char *num2);
void subtract(char *num1, char *num2);
void multiply(char *num1, char *num2);
void divide(char *num1, char *num2);

int main() {
    char input[150], num1[MAX], num2[MAX], op[2];
    
    while (1) {
        printf("Calc> ");
        fgets(input, sizeof(input), stdin);

        // Remove newline
        input[strcspn(input, "\n")] = 0;

        if (strcmp(input, "Exit") == 0) {
            break;
        }

        // Parse input
        if (sscanf(input, "%s %s %s", num1, op, num2) != 3) {
            printf("Invalid input!\n");
            continue;
        }

        // Check if all characters are digits
        char *p = num1;
        while (*p) {
            if (!isdigit(*p)) { printf("Invalid number!\n"); goto next; }
            p++;
        }
        p = num2;
        while (*p) {
            if (!isdigit(*p)) { printf("Invalid number!\n"); goto next; }
            p++;
        }

        // Perform operation
        if (*op == '+') add(num1, num2);
        else if (*op == '-') subtract(num1, num2);
        else if (*op == '*') multiply(num1, num2);
        else if (*op == '/') divide(num1, num2);
        else printf("Invalid operator!\n");

        next:;
    }
    return 0;
}

// Addition
void add(char *num1, char *num2) {
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int result[MAX] = {0};
    int carry = 0, i = len1-1, j = len2-1, k = (len1 > len2 ? len1 : len2);

    while (i >= 0 || j >= 0 || carry) {
        int a = (i >= 0) ? num1[i--] - '0' : 0;
        int b = (j >= 0) ? num2[j--] - '0' : 0;
        result[k--] = (a + b + carry) % 10;
        carry = (a + b + carry) / 10;
    }

    // Print result
    i = 0;
    if (result[0] == 0) i = 1; // skip leading zero
    printf("Result: ");
    for (; i < MAX; i++) printf("%d", result[i]);
    printf("\n");
}

// Subtraction (num1 >= num2)
void subtract(char *num1, char *num2) {
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int result[MAX] = {0};
    int borrow = 0, i = len1-1, j = len2-1, k = len1-1;

    while (i >= 0) {
        int a = num1[i] - '0';
        int b = (j >= 0) ? num2[j] - '0' : 0;
        int sub = a - b - borrow;
        if (sub < 0) { sub += 10; borrow = 1; }
        else borrow = 0;
        result[k--] = sub;
        i--; j--;
    }

    // Print result skipping leading zeros
    i = 0;
    while (i < MAX && result[i] == 0) i++;
    if (i == MAX) printf("0\n");
    else {
        printf("Result: ");
        for (; i < MAX; i++) printf("%d", result[i]);
        printf("\n");
    }
}

// Multiplication
void multiply(char *num1, char *num2) {
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int result[MAX*2] = {0};

    for (int i = len1-1; i >= 0; i--) {
        int carry = 0;
        int n1 = num1[i] - '0';
        for (int j = len2-1; j >= 0; j--) {
            int n2 = num2[j] - '0';
            int sum = n1*n2 + result[i+j+1] + carry;
            result[i+j+1] = sum % 10;
            carry = sum / 10;
        }
        result[i] += carry;
    }

    // Print result skipping leading zeros
    int i = 0;
    while (i < MAX*2 && result[i] == 0) i++;
    if (i == MAX*2) printf("0\n");
    else {
        printf("Result: ");
        for (; i < MAX*2; i++) printf("%d", result[i]);
        printf("\n");
    }
}

// Division (integer division, num1 / num2)
void divide(char *num1, char *num2) {
    unsigned long long n1 = 0, n2 = 0;

    // Convert first 18 digits (to avoid overflow)
    for (int i = 0; i < 18 && num1[i]; i++) n1 = n1*10 + (num1[i]-'0');
    for (int i = 0; i < 18 && num2[i]; i++) n2 = n2*10 + (num2[i]-'0');

    if (n2 == 0) { printf("Division by zero!\n"); return; }

    printf("Quotient: %llu\n", n1 / n2);
    printf("Remainder: %llu\n", n1 % n2);
}
