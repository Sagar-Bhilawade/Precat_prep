#include<stdio.h> 

int main()
{
    int num = 10; 
    int *ptr = &num; 

    //printf("%d",num); // 10 
    //printf("%d",*ptr); //10 
    /*
        *ptr ==> ptr is reading the value of num  

    */
    char *cptr; // character pointer  
    double *dptr; // double pointer 
    printf("%d\n",sizeof(*ptr));
    printf("%d\n",sizeof(*cptr)); 
    printf("%d\n",sizeof(*dptr)); 
}