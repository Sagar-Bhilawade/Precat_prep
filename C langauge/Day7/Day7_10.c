#include<stdio.h> 

// I/P --> character ( %c )
// char --> upper case , lower case , digit , special char
// ASCII --> 65 - 90 --> upper case 
// 97 - 122 --> lower case 
// 48 - 57 --> digit 
// special char 

int main()
{
    char ch; 
    printf("Enter the character"); 
    ch = getchar ( );  // it will scan the char 
    //scanf("%c",&ch); 
    // --> 0 --> 48

    if(ch>=97 && ch<=122)
        printf("Lower case \n");
    else
    {
        if(ch>=65 && ch<=90)
           printf("upper case"); 
        else
        {
                if(ch>=48 && ch<=57)
                    printf("Digit \n"); 
                else
                    printf("Special symbol\n"); 
                  
        }
    }
     
}
/*
    A-Z --> 65 to 90 
    a-z --> 97 to 122 
    0-9 --> 48 to 57 
*/






