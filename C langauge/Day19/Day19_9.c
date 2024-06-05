#include<stdio.h> 
#include<string.h> 
// user-defined datatype 
// created my datatype 
// blue-print
// global structure
struct emp
{
    
    int empid; // 4 bytes
    char name[20];// 20 bytes 
    double salary; // 8 bytes 
}; 

 
// we can create the variable of structure inside any user-defined global function  
int main()
{
    // local structure 
    struct student
    {
        int rollnumber; // 4 bytes
        char name[20]; // 20 bytes 
    }; 
    // int x = 10; // 4 bytes  
    // int x,y,z,; 
    struct emp e1 = { 1,"Ketan",1000.00}; 
    // e1 --> variable / object 
    struct emp e2 = { 2,"Amit"};
    struct emp e3; // only declaration  
    struct emp e4; // only declaration 
    // e1,e2,e3,e4 are variables of structure emp
       

    //printf("%d %s %f",e1.empid,e1.name,e1.salary); 

    struct emp *p = &e1;  
    //printf("%d %s %f",p->empid,p->name,p->salary); 
    // i am printing the structure members using pointer
    // use -> operator ( arrow operator )

    // int a; 
    // a = 10;

    e3.empid = 2; 
    strcpy(e3.name,"Aditya");  
    e3.salary = 1000.00;
    //printf("%d %s %f",e3.empid,e3.name,e3.salary); 
    
    //struct emp e4; //==>  id name salary 
    
    printf("Enter empid name and salary: ");
    scanf("%d%s%lf",&e4.empid,e4.name,&e4.salary); 

    printf("%d %s %lf",e4.empid,e4.name,e4.salary); 


    return 0; 
}

