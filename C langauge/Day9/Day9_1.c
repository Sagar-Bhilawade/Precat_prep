#include<stdio.h> 

int main()
{

    int rank; 

    START: 
    printf("Enter the rank\n");
    scanf("%d",&rank); // 6

    if(rank>=1 && rank<=5)
         goto LABEL; 
    else
         goto START;      

    LABEL: 
    printf("Excellent rank!!\n");
    printf("All the best");  
    return 0; 
}