#include <stdio.h>

int main()
{
    // Get two numbers of up to 50 digits, perform addition and print the result

    char num1[51], num2[51], result[52];

    getnumbers(num1, num2);
    addnumbers(num1, num2, result);
    print(result);

    return 0;
}

void getnumbers(char *num1, char *num2)
{
    scanf("%s", num1);
    scanf("%s", num2);
}

void addnumbers(char *num1, char *num2, char *result)
{
    int i = 0, j = 0, k = 0, carry = 0, sum;
    char temp[52];

    while(*(num1 + i) != '\0') i++;
    while(*(num2 + j) != '\0') j++;

    i--;  
    j--;

    while(i >= 0 || j >= 0 || carry)
    {
        sum = carry;

        if(i >= 0)
            sum += *(num1 + i--) - '0';

        if(j >= 0)
            sum += *(num2 + j--) - '0';

        carry = sum / 10;
        *(temp + k++) = (sum % 10) + '0';
    }

    *(temp + k) = '\0';

    k--;
    i = 0;

    while(k >= 0)
        *(result + i++) = *(temp + k--);

    *(result + i) = '\0';
}

void print(char *result)
{
    printf("%s", result);
}
