#include<stdio.h> 

int main()
{
    // user-defined datatype
    enum color
    {
        RED=1,BLUE,GREEN 
    }; 
    int num; 
    //datatype variable-name 

    //typedef --> creating an alias 
    // alias --> nickname 

    typedef int INT; 
    // INT is alternative/nickname given to int 
    INT num3,num4,num5;  
   
    enum color c11; 
    //datatype variable-name  

    typedef enum color e_c; 
   //e_c is alias/alternative name for enum color
   // enum color c1,c2,c3 

   e_c c1,c2,c3;  
   
    return 0; 
}