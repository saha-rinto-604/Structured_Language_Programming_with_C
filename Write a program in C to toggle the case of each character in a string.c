#include<stdio.h>



char* returntoggled(char str[], char toggle[], int l)
{

    int i ;


    for(i = 0 ; i<l ; i++)
    {

        if(str[i]>='a' && str[i]<='z')
        {

            toggle[i]=str[i]-32 ;
        }

        else if(str[i]>='A' && str[i]<='Z')
        {

            toggle[i]= str[i]+32 ;
        }

        else {
            toggle[i]= str[i];
        }




    }




    toggle[i]='\0';



    return toggle ;


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


    char toggle[100];
    fflush(stdin);

    int length ;
    length= calstringlength(str);


    returntoggled(str, toggle, length);


    printf("The toggled string is %s", toggle);


    return 0;
}
