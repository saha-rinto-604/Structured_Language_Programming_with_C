#include<stdio.h>
#include<string.h>

int main()
{

    char str1[100];
    gets(str1);
    fflush(stdin);


    char str2[100];
    gets(str2);
    fflush(stdin);

    int i ;
    int j=0 ;


    int occur=0 ;

    int count=0;


    for(i =0 ; str1[i]!='\0'; i++)
    {
           int k=i;



        while(str1[k]==str2[j] && str2[j]!='\0' && str1[k]!='\0')
        {

            count++ ;
            k++ ;
            j++;

        }


        if(count>0)
        {
            if(count==strlen(str2))
            {
                occur++ ;
            }
            j=0 ;
            count=0 ;



        }
    }

    printf("The total occurances of substring are: %d", occur);




    return 0;
}
