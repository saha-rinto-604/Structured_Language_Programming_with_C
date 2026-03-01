#include<stdio.h>

struct Students{

char name[100];
int id ;
float cgpa ;

};

int main(){

int n;
scanf("%d", &n);
getchar();

struct Students stu[n] ;

for(int i=0; i<n; i++){
    gets(stu[i].name);
    fflush(stdin);
    scanf("%d %f",&stu[i].id, &stu[i].cgpa);
    getchar();
}

float topper_cgpa=stu[0].cgpa ;
struct Students topper_info=stu[0] ;

for(int i=0; i<n; i++){

    if(stu[i].cgpa>topper_cgpa){
        topper_cgpa=stu[i].cgpa ;
        topper_info=stu[i] ;
    }


}

printf("The topper info is: %s, %d, %f", topper_info.name, topper_info.id, topper_info.cgpa);



return 0;
}
