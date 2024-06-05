#include<stdio.h> 
void sumpro( int a , int b ); 
int main()
{
    auto int d;//auto keyword indicates local variable ( in function variable)  
    // it is optional  
    int c; // if not initialized -- its value is garbage (anything)
    // Because it is in stack 

    int a = 10 , b = 3; 
    // a,b,c will be created when main is called  

    //sumpro ( a , b); 
    // actual argument are copied into formal argument 

     printf("\n c= %d\n",c);   // garbage  
     {
            int c = 10;
            printf("in block : c =%d\n",c); // 10  
     }
     {
            printf("in block : c =%d\n",c); 
            // c in main ==> garbage   
     }
     {
            //int c = 5; 
            {
                //int c = 50;
                {
                    int c = 500; // accessible within the block 
                    
                } 
                printf("in block : c =%d\n",c); 
            }
     }


    return 0; 
}
//              10       3 
void sumpro( int a , int b )
{
        // a,b,ps,pp will be created when sumpro is called 
        int ps; 
        int pp; 
        ps = a + b; // 13 
        pp = a * b; // 30   

        printf("sum = %d prod = %d",ps,pp); // 13 30 
        a++; 
  // modify "a" in sumpro FAR --> will not affect mains "a" var      
        b++; 

// a , b, ps, pp will be destroyed 

}