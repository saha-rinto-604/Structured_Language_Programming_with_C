#include<stdio.h>


int main()
{

    int divisor, dividend ;
    int rem ;

    scanf("%d %d", &divisor, &dividend);

    while(divisor!=0)
    {

        rem= dividend%divisor ;
        dividend=divisor ;
        divisor=rem ;


    }

    printf("The GCD Value is : %d", dividend);


    return 0;

}
