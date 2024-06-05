#include<stdio.h> 

int main()
{
    //name , id , salary
    char name[32]; 
    int empid; 
    float salary;

    printf("Name    :   ");
    scanf("%s",name); 
    printf("empid    :   ");
    scanf("%d",&empid); 
    printf("salary    :   ");
    scanf("%f",&salary);

    printf("%s %d %f",name,empid,salary);    
    return 0; 
}