#include<stdio.h>

int main(){


int num ;

scanf("%d", &num);

int original ;
original = num ;
int rem;
int rev = 0;


while(num!=0){
    rem= num%10 ;
    rev=rev*10+rem ;
    num=num/10 ;
}

if(rev == original){
    printf("This is a palindrome!");
}

else {
    printf("This is not a palindrome!");

}


return 0 ;
}


