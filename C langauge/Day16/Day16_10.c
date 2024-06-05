#include<stdio.h> 
// void --> nothing 
int main()
{
    //int *ptr;// unit pointer Wild pointer  
     int *ptr = NULL; 
    int num = 10; 
    float fptr = 10.33;
    char ch ='A';   
    void *ptr = &num; // point to int  
    // void ==> generic pointer
    // void ==> dereferencing 
    //printf("%d",*ptr); // NOT OK 

     printf("%d\n",*(int*)ptr);

     ptr = &fptr;  // point to float 
     printf("%f\n",*(float*)ptr);

    ptr = &ch;   // point to char 
    printf("%c\n",*(char*)ptr);

}

// int *ptr ==> int 
// char *cptr ==> char 
// void *ptr ==> generic pointer 



// int main()
// {
//     int num = 10; 
//     int *ptr = &num; 

//     printf("%d",*ptr); // 10; 
// }