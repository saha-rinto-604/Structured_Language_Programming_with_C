#include<stdio.h>

int main(){

int N;
printf("Take the user input of N to find the Nth fibonacci series: ");
scanf("%d", &N);

int num1=0;
int num2=1;
int fibo ;

for(int i=0 ; i<N; i++){
    if(i==0 || i==1){
        printf("%d ", i);
    }

    else {
            fibo=num1+num2 ;
            printf("%d ", fibo);
            num1= num2 ;
            num2= fibo ;


    }

}

return 0;
}
