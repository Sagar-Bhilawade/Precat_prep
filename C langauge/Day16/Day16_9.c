#include<stdio.h> 

int mystrlen(const char *s); 
int main()
{   
    int len; 
    char name[50]="Reader"; 
    len = mystrlen(name); //base address  
    printf("%d",len);
    return 0; 
}

// R e a d e r \0   
// user-defined function 
int mystrlen(const char *s)//pointer notation 
{
        int i = 0;

    // while(*(s+i)!='\0)
    while(s[i]!='\0')
    {
         i++;  
    } 
    return i; 

}





// #include<stdio.h> 
// #include<string.h> 
// // typedef unsigned int --> size_t
// int main()
// {
//     char name[50] ="Reader"; 

//     printf("%d",strlen(name)); 
//     return 0; 
// }
