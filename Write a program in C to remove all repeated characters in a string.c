#include<stdio.h>


int main()
{


    char str[100];
    gets(str);
    fflush(stdin);



    char result[100];


    for(int i=0 ; str[i]!='\0'; i++)
    {
        for(int j=i+1 ; str[j+1]!='\0'; j++)
        {

            if(str[i]==str[j])
            {
                str[j]='1' ;

            }
        }
    }

    int k=0 ;


    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]=='1')
        {

            continue ;
        }

        result[k]=str[i];
        k++;
    }



    printf("The updated string is %s", result);


    return 0;

}
