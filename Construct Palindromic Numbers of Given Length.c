#include<stdio.h>
#include<math.h>

int main(){

int K ;
printf("Give the input of K-length: ");
scanf("%d", &K);

int start_value= pow(10, K-1);
int last_value=pow(10, K)-1 ;
int val ;
int rem;
int rev=0;
int pal_count=0 ;

printf("The palindrome numbers are: ");


for(int i= start_value ; i<=last_value ; i++){
            val=i ;
            while(val!=0){
                rem=val%10;
                rev=rev*10+rem;
                val=val/10 ;
            }

            if(i==rev){
                pal_count++ ;
                printf("%d ", i);
            }

            rem=0;
            rev=0;

}

printf("\nThe total palindrome number count: %d", pal_count);

return 0;
}
