#include<stdio.h> 
#include<string.h> 

int main()
{
    char str1[] ="Sunbeam Infotech";
//str1 is array of char storing 16 + 1 (\0)     

    char *str2 = "Sunbeam Infotech";
    // str2 is a pointer to string constant 

    char str3[] = "Sunbeam\0Infotech"; 
//str3 is array of char storing 16 + 1 (\0)    

//sizeof()  is a compile time operator that counts number of bytes used 

  printf("sizeof(str1)=%d\n",sizeof(str1)); //17
  printf("sizeof(str2)=%d\n",sizeof(str2));//4
  printf("sizeof(str2)=%d\n",sizeof(str3));//17  
//strlen() is a function that count number of chars 
//until \0 is encountered
// strlen() --> length  

printf("strlen(str1)=%d\n",strlen(str1)); //16
printf("strlen(str1)=%d\n",strlen(str2)); //16
printf("strlen(str1)=%d\n",strlen(str3)); //7

printf("%s\n",str1); 
printf("%s\n",str2);
printf("%s\n",str3); 

}

