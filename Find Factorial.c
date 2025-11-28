#include<stdio.h>

int main()
{

    int num ;
    scanf("%d", &num);
    int fact= 1 ;

    for(int i=1; i<=num ; i++)
    {

        fact=fact*i;

    }

    printf("The factorial of %d is : %d", num, fact);

    return 0;
}
