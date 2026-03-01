#include <stdio.h>

int main()
{
    char str[100];
    gets(str);

    int maxCount = 0;
    char maxChar = '\0';


    for(int i=0; str[i]!='\0'; i++){
        if(str[i]>='A' && str[i]<='Z'){

            str[i]=str[i]+ 32;
        }
    }

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '1')
            continue;

        int count = 1;

        for (int j = i + 1; str[j] != '\0'; j++)
        {
            if (str[i] == str[j])
            {
                count++;
                str[j] = '1';
            }
        }

        if (count > maxCount)
        {
            maxCount = count;
            maxChar = str[i];
        }
    }

    printf("Maximum occurring character: %c\n", maxChar);
    printf("Number of occurrences: %d\n", maxCount);

    return 0;
}
