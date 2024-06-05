#include<stdio.h> 

int main()
{
    // while and for --> entry controlled 
    // do-while --> exit controlled 
    // exit controlled --> condtn checked at the end
    int choice; 
    do
    {
         printf("Enter the choice"); 
         scanf("%d",&choice); 
    } while (choice<=10 && choice>=1);
    
    printf("loop exited"); 


    return 0; 
}