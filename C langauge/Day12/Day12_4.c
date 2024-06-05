#include<stdio.h> 
void sumpro(int a , int b ); 
// variable declared inside the function ==> local 
//variable declared outside the function ==> global 

/*
    global variable 
    // created when program is started==> even before main () is called 
    // created in datasectin ==> default value is 0 
    // life ==> program 
    // scope ==>program  
*/
extern int ps,pp; // declaration 
// notifying the compiler 
int main()
{
    
    int x = 10 , y = 3; 
    sumpro ( x , y); // actual argument 

    printf("sum = %d prod=%d",ps,pp);// error   

    return 0; 
}
int ps,pp;  // global variables ==> data section 
// life ==> throughout the program 

void sumpro(int a , int b )
{
    
    ps = a + b; 
    pp = a * b;  
}

