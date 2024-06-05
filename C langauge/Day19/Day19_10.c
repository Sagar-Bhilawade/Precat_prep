#include<stdio.h> 

// structure declaration 
struct emp
{
    int empid; // 4  bytes  
    char name[20]; // 20 bytes 
    double salary; // 8 bytes
};
void accept_emp( struct emp *p); 
void print_emp(struct emp e); 
int main()
{
    // int e1; 

    struct emp e1;     
    accept_emp(&e1); // pass by address / call by address 
    print_emp(e1); // pas by value / call by value
    return 0; 
}

void accept_emp( struct emp *p)
{
        printf("Enter the empid"); 
        scanf("%d",&p->empid); 

        printf("Enter the name");
        scanf("%s",p->name); 

        printf("Enter the salary");
        scanf("%lf",&p->salary); 
}
void print_emp(struct emp e)
{
    printf("%d %s %.2lf",e.empid,e.name,e.salary); 
}