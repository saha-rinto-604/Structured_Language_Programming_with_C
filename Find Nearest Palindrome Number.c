#include<stdio.h>

int main(){

int N ;
scanf("%d", &N);

int findpalindrome =0 ;

int rem=0 ;
int rev=0 ;
int val ;

int reversepalnum ;

while(findpalindrome!=1){
    for(int i=N ; i>=0 ; i--){
            val = i ;
        while(val!=0){
           rem= val%10 ;
           rev=rev*10 + rem ;
           val =val/10 ;

        }
        if(i == rev){
            findpalindrome= 1;
            printf("%d\n", i);
            reversepalnum= i ;
            break ;
        }

        else {
             rem= 0;
             rev= 0;
        }

    }
}

findpalindrome=0 ;
rem =0;
rev =0;


int forwardpalnum;

while(findpalindrome!=1){
     for(int i=N+1; ;i++){
        val = i ;
        while(val!=0){
           rem= val%10 ;
           rev=rev*10 + rem ;
           val =val/10 ;

        }
        if(i == rev){
            findpalindrome= 1;
            printf("%d\n", i);
            forwardpalnum= i ;
            break ;
        }

        else {
             rem= 0;
             rev= 0;
        }

     }

}

if(N-reversepalnum>forwardpalnum-N){
    printf("The nearnest palindrome is: %d", forwardpalnum);

}

else if (N-reversepalnum<forwardpalnum-N) {

    printf("The nearest palindrome is: %d", reversepalnum);
}
else {
    printf("The nearest palindrome values are: %d %d", reversepalnum, forwardpalnum);
}

return 0 ;

}
