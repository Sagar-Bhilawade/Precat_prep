#include<stdio.h> 

int main()
{
    char ch; 
    printf("Enter the character"); 
    ch = getchar();  //A 
    // scan the character 

    switch(ch) //a or A --> 65 or 97 
    {
        case 'a': 
        case 'A': 
         printf("A for Android");
        break;  

        
        case 'b': 
        case 'B': 
         printf("B for Basic");
        break;

    
        case 'c': 
        // break;
        case 'C': 
         printf("C for Cprogramming");
        break;    

        
        case 'd': 
        case 'D': 
         printf("D for Database");
        break;    

        default: 
        printf("No Language");  
    }

    return 0;
}