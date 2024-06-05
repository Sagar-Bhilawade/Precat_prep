#include<stdio.h> 
void sumpro(int a , int b ); 
int ps,pp;  // global variables ==> data section 

// variable declared inside the function ==> local 
//variable declared outside the function ==> global 

/*
    global variable 
    // created when program is started==> even before main () is called 
    // created in datasectin ==> default value is 0 
    // life ==> program 
    // scope ==>program  
*/
int main()
{
    
    int x = 10 , y = 3; 
    sumpro ( x , y); // actual argument 

    printf("sum = %d prod=%d",ps,pp);// 13 30    

    return 0; 
}

void sumpro(int a , int b )
{
    
    ps = a + b; 
    pp = a * b;  
}
// #include<stdio.h> 
// void sumpro(int a , int b ); 
// int main()
// {
   
//     int x = 10 , y = 3; 
//     sumpro ( x , y); // actual argument 

//     //printf("sum = %d prod=%d",ps,pp);// error   

//     return 0; 
// }

// void sumpro(int a , int b )
// {
//     int ps; // local var
    
//     int pp; // local var  
//     ps = a + b; 
//     pp = a * b;  
// }