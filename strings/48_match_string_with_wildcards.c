#include <stdio.h>

int match(char str[], char pattern[])
{
    int i = 0, j = 0;
    int star = -1, match_pos = 0;

    while (str[i] != '\0')
    {
        if (pattern[j] == '?' || pattern[j] == str[i])
        {
            i++;
            j++;
        }
        else if (pattern[j] == '*')
        {
            star = j;
            match_pos = i;
            j++;
        }
        else if (star != -1)
        {
            j = star + 1;
            match_pos++;
            i = match_pos;
        }
        else
        {
            return 0;
        }
    }

    while (pattern[j] == '*')
        j++;

    return pattern[j] == '\0';
}

int main()
{
    char str[200], pattern[200];

    printf("Enter string: ");
    scanf(" %199s", str);

    printf("Enter pattern (* and ? allowed): ");
    scanf(" %199s", pattern);

    if (match(str, pattern))
        printf("Match");
    else
        printf("No match");

    return 0;
}
