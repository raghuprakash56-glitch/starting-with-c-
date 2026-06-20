#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int i, words = 0;

    // Input string using gets
    printf("Enter a string: ");
    gets(str);  // Warning: gets is unsafe, use fgets in real programs

    // Count words
    for (i = 0; str[i] != '\0'; i++) {
        // Count a word when a non-space character is followed by space or end of string
        if ((i == 0 && !isspace(str[i])) || 
            (isspace(str[i-1]) && !isspace(str[i]))) {
            words++;
        }
    }

    printf("Number of words: %d\n", words);

    return 0;
}
