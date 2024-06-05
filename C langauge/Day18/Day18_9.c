#include<stdio.h> 
#include<stdlib.h> 

int main()
{
    // void realloc(void *ptr,size_t size); 
    int *ptr;

    ptr = (int*)calloc(3,sizeof(int));  
    if(ptr==NULL)
    {
       printf("Unable to allocate memory\n");
       return 0; 
    } 
    int i; 
    for(i=0;i<=2;i++)
        *(ptr+i) = 10 * (i+1); 

    ptr = (int*)realloc(ptr,5 * sizeof(int)); 

    ptr[3] = 23; 
    ptr[4] = 84; 
    
    for(i=0;i<=4;i++)
        printf("%d\n",*(ptr+i)); 

    free(ptr); 
    ptr = NULL; 
    return 0; 
}