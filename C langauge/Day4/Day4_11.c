#include<stdio.h> 

int main()
{
    int num;  // %d 
    float fvar; // %f
    double d1; // %lf 

    printf("Enter the numbers "); 
    scanf("%d%f%lf",&num,&fvar,&d1); 

    printf("integer=%d float=%f double=%lf",num,fvar,d1); 


    return 0; 


}
/*
        printf("Enter the int"); 
        scanf("%d",&num); 

        printf("Enter the float"); 
        scanf("%f",&fvar); 

        printf("Ente the double");
        scanf("%lf",&d1); 


*/