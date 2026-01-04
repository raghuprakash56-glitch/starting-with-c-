#include <stdio.h>

int main()
{
    // Get a string and a character from the user, find all the positions where the character is present and print it

    char str[100], ch;
    int positions[100];
    int count = 0;
    int i;

    scanf("%s", str);
    scanf(" %c", &ch);

    findpos(str, ch, positions, &count);

    for(i = 0; i < count; i++)
    {
        printf("%d", *(positions + i));
        if(i < count - 1)
            printf(", ");
    }

    return 0;
}

void findpos(char *str, char ch, int *positions, int *count)
{
    int index = 1;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            *(positions + *count) = index;
            (*count)++;
        }
        str++;
        index++;
    }
}
