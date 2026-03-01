#include<stdio.h>
#include<string.h>



char* reversestr(char str[], char rstr[], int l)
{


    int i ;


    for(i=0; i<l ; i++)
    {


        rstr[l-1-i]=str[i];


    }

    rstr[l]='\0';


    return rstr ;
}


int calstringlength(char str[])
{

    int count=0;

    for(int i=0 ; str[i]!='\0'; i++)
    {


        count++ ;


    }


    return count ;



}


int main()
{

    char str[100];
    gets(str);
    fflush(stdin);


    char rstr[100];
    fflush(stdin);


    int length ;
    length= calstringlength(str);


    reversestr(str, rstr, length);


    printf("The reversed string is %s", rstr);

    if(strcmp(str,rstr)==0){
        printf("\nYES");
    }

    else {
        printf("\nNO");
    }
    return 0;
}
