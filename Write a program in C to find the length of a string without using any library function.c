#include<stdio.h>

int calstringlength(char str[]){

int count=0;

for(int i=0 ;str[i]!='\0'; i++){


    count++ ;


}


return count ;



}


    int main()
    {

        char str[50];
        gets(str);
        fflush(stdin);


        int length ;
        length= calstringlength(str);


        printf("The length of the string is: %d", length);



        return 0 ;


        }







