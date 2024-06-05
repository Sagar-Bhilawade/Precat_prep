#include<stdio.h>
#include"Day19_1.h" 

int main()
{
    double rad,area; 

    printf("Enter the radius:");
    scanf("%lf",&rad); 

    area = PI * rad * rad;  

    printf("Area = %.2lf",area); 
     
    return 0; 
}
//gcc Day19_1.c -E -o Day19_1.i
