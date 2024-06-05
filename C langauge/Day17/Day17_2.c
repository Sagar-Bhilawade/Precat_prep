#include<stdio.h> 

int main(int argc, char const *argv[])
{   
    //argv ==> argument vector 
    printf("%d\n",argc);    
    //printf("%s\n",argv[0]); // name of executable 
    //printf("%s\n",argv[1]);
    int i; 
    for(i=0; i < argc; i++)
          puts(argv[i]); 
    return 0;
}
// console independent programming 


