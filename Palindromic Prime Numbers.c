
#include<stdio.h>


int main(){


int arr[10] = {505, 99, 302, 101, 54, 65, 11, 13} ;

int flag =0 ;


for(int i=0 ; i<8 ; i++){
    for(int j=2 ; j<arr[i] ; j++){

        if(arr[i]%j==0){
            flag = 1 ;

            break ;


        }
    }

    if(flag==0){
            int rem=0;
            int rev= 0;
            int num=arr[i];
        while(arr[i]!=0){
            rem= arr[i]%10;
            rev= rev*10 + rem ;
            arr[i]=arr[i]/10 ;
        }
        if(num == rev){
            printf("%d\n", num);
        }
    }

    else {
            flag =0 ;
    }


}
return 0;

}
