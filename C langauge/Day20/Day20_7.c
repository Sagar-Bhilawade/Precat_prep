#include<stdio.h> 

//FILE --> all the info needed to control the stream  

int main()
{
    FILE *fptr; 
    char ch; 

    fptr = fopen("Sunbeam.txt","w"); 

    if(fptr==NULL)
    {
        printf("Unable to create"); 
        return 0; 
    }

    printf("Specify the char"); 

    while( ( ch = getchar())!='Q')
    {
            fputc(ch,fptr); 
    }

    printf("\n sucess"); 

    fclose(fptr); 

    return 0; 
}