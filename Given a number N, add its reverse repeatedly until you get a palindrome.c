#include<stdio.h>

int main(){

int num ;
scanf("%d", &num);
int original;
original = num ;
int findpalindrome=0 ;

while(findpalindrome!=1){
        int rem =0;
        int rev =0 ;

    while(num!=0){
            rem= num%10 ;
            rev= rev*10 + rem ;
            num= num/10 ;

    }

    if(original == rev){

        findpalindrome = 1;
        printf("The found palindrome is : %d", original);
    }

    else {
        original = original + rev ;
        num = original ;

    }
}


return 0 ;
}
