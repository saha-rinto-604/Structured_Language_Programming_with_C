#include<stdio.h>


int adddigitstring(char str[])

{
    int sum =0 ;
    for(int i=0; str[i]!='\0'; i++){

        if(str[i]>='0' && str[i]<='9'){
            sum=sum+ str[i]-'0' ;
        }


    }
    return sum ;
}

int main(){

char str[100];
gets(str);
fflush(stdin);

int adddigit ;
adddigit= adddigitstring(str);


printf("The value of addition is : %d", adddigit);





return 0;
}
