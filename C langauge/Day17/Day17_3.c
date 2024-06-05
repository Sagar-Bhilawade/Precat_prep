#include<stdio.h> 

int main(int argc, char const *argv[], char *envp[])
{
    int i; 
    for(i=0; i < envp[i]!=NULL; i++)
          puts(envp[i]);  
    return 0;
}

// windows 
// this pc --> properties --> advanced system settings
// advanced  --> environment variable 
// to access env variable in C program , use main() 3rd arg
// last entry of envp[] is NULL

