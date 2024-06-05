#include<stdio.h> 

int main()
{
    int i=1; 
    // continue --> jump statement  

    // if(i==1) 
    //   continue; // Error continue statement not within a loop

    /*
        1. continue statement should be within a loop
        2. continue takes the control to nearest enclosing loop
    */

    for(i=1;i<=10;i++)
    {
        if(i%2==0) //5%2==0 
          continue; 
        printf("%d",i); //135 
    }

    return 0; 
}