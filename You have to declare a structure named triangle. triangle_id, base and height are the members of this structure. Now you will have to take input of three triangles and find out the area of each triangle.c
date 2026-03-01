#include<stdio.h>

struct triangle{

int id;
double base;
double height ;

};


int main(){

    int n;
    scanf("%d", &n);
    getchar();

    struct triangle tri[n];

    for(int i=0; i<n; i++){
        scanf("%d %lf %lf", &tri[i].id, &tri[i].base, &tri[i].height);
        getchar();
    }

    double area[n] ;


    for(int i=0; i<n; i++){

        area[i]=0.5*tri[i].base*tri[i].height ;
    }

    for(int i=0; i<n; i++){

        printf("The area of %d is %lf\n", tri[i].id, area[i]);
    }



return 0;
}
