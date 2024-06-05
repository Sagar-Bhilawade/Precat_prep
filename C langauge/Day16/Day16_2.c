#include<stdio.h> 

int main()
{
    // using string literal 
    int i; 
    char str4[5]="Tech";  
    // tech is string const/literal 
    //short hand decl --> 'T' 'e' 'c' 'h' '\0'
    // string 

    char str6[] ="Aditya";
    // "Aditya " is a string literal/constant 
    // 'A' 'd' 'i' 't' 'y' 'a' '\0'
    // 7 chars ==> ( 6 char + 1 '\0' ) 

    char str7[4]="Pune"; 
    // just a char array 
    // str7 is not a string

    //print all char until \0 is encountered 
    // for(i=0;str4[i]!='\0';i++)
    //   putchar(str4[i]);  
    

    // for(i=0;str6[i]!='\0';i++)
    //   putchar(str6[i]);  
    
    for(i=0;i<4;i++)
      putchar(str7[i]);  
    

    return 0; 
}

// char str1[5] ="Hell" ==> string
// char str2[4]="ABCD"--> char arrary  


// char arr[5] ==> 