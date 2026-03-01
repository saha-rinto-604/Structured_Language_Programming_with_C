#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    gets(str);

    int length = strlen(str);


    for (int i = length - 1; i >= 0; i--)
    {
        /
        if (i == 0 || str[i - 1] == ' ')
        {
            int j = i;


            while (str[j] != ' ' && str[j] != '\0')
            {
                printf("%c", str[j]);
                j++;
            }

            printf(" ");
        }
    }

    return 0;
}
