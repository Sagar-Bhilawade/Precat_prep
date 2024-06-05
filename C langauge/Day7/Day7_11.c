#include<stdio.h> 

int main()
{
    int num; 
    printf("Enter the num"); 
    scanf("%d",&num); //22

    if(num==1)
    {
        printf("One"); 
    }
    else if(num==2)
    {
        printf("Two");
    }
    else if(num==3)
    {
        printf("Three"); 
    }
    else
    {
        printf("No idea"); 
    }
    


    return 0; 

}