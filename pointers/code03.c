#include <stdio.h>
#include <string.h>

int main() {
    char mainStr[100], subStr[50];
    char *pos;

    // Input main string
    printf("Enter the main string: ");
    scanf("%s", mainStr);

    // Input substring
    printf("Enter the substring: ");
    scanf("%s", subStr);

    // Search for substring in main string
    pos = strstr(mainStr, subStr);

    if (pos != NULL) {
        // Print position (1-based index)
        printf("Substring found at position: %ld\n", pos - mainStr + 1);
    } else {
        printf("Substring not found.\n");
    }

    return 0;
}
