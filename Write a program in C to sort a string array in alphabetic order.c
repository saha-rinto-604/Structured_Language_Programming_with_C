#include<stdio.h>



char *sortedstring(char str[])
{
    int i ;

    for(i=0 ; str[i]!='\0'; i++)
    {
        for(int j=0; str[j+1]!='\0'; j++)
        {
            if(str[j]> str[j+1])
            {
                char temp= str[j];
                str[j]=str[j+1];
                str[j+1]=temp ;
            }
        }
    }

    return str ;




}


int main()
{

    char str[100];
    gets(str);
    fflush(stdin);


    sortedstring(str);



    printf("The sorted string is %s",str);




    return 0;
}
