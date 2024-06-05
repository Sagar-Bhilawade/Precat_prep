#include<stdio.h>

int main()
{
   int i; 
   // init list 
   char str1[5]={'A','B','C','D','E'};
   // 5 char array --> 5 bytes      

   char str2[5] ={'a','b','c','d','\0'}; 
   // 5 char array terminated with \0 char = string  

    char str3[5] ={'I','n','f','o'};  
    // 5 char array terminated with \0 char=string 
    //when array is init partially at the point of 
    // declaration rest element are zero 

    char str5[] ={ 'S','u','n','b','e','a','m'}; 
    // array of 7 chars ==> 7 bytes  

//    for(i=0;i<5;i++)
//       putchar(str1[i]); 
//       // putchar --> to print single character 
    //  for(i=0;str2[i]!='\0';i++)
    //   putchar(str2[i]); 
  
  // print all char until \0 is encountered 
    // for(i=0;str3[i]!='\0';i++)
    //   putchar(str3[i]); 
  
    for(i=0;i<7;i++)
      putchar(str5[i]); 
  
  
   return 0; 
}


