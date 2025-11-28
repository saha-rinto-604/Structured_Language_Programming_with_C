#include<stdio.h>

int main(){

int num ;

scanf("%d", &num);

int original_sum ;


int rem ;
int sum=0;

while(num!=0){
       rem= num % 10;
       sum = sum + rem ;
       num = num/10 ;
}

printf("The sum of the number is : %d\n", sum);

original_sum = sum ;

int rem1;
int rev=0 ;

while(sum!=0){

    rem1= sum%10 ;
    rev= rev*10+ rem1 ;
    sum=sum/10 ;
}

printf("The reverse of sum is : %d\n", rev );

if (original_sum == rev){

    printf("it is a palindrome!");


}

else {

    printf("It is not a palindrome!");
}


return 0 ;

}
