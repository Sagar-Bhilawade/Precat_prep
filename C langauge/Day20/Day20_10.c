#include<stdio.h> 
#include<string.h> 

char* mystrcpy(char *dest,const char *src); 
int main()
{
        char src[50] = "Hello"; 
        char dest[50]; 

        mystrcpy(dest,src); 

        puts(dest); 

}
// src =>    H  e  l  l  o  \0 
// dest->    H  e  l  l  o  \0      
char* mystrcpy(char *dest,const char *src)
{
        int i = 0; 

        while(src[i]!='\0')
        {
            dest[i] = src[i];
            i++;  
        }

        dest[i] = '\0'; 
    // null character should be exp placed 
        return dest; 
}









// int main()
// {
//     char src[50] = "Hello"; 
//     char dest[50]; 

//     strcpy(dest,src); 
//     puts(dest); 
// }

