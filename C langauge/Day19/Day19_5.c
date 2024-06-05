#include<stdio.h> 

//stringizing operator 

#define PRINT(x) puts(#x); 
#define PRINT_VAR(var) printf(#var "=%d\n",var)

// token pasting operator  

#define PRINT_SAL(a,b) printf("sal = %d\n",a##b)

int main()
{
    int basicsalary=5000; 
    int adventure = 100; 
    PRINT(MY NAME IS JAMES BOND)
    //puts("MY NAME IS JAMES BOND")
    
    PRINT_VAR(adventure); 
    //printf("adventure" "=%d",adventure);
    
    PRINT_SAL(basic,salary); 
    //printf("sal = %d\n",basicsalary);
    return 0; 
}

/*
        cond 2
        2000 lines of code 

        if(cond==1)
            // code 1 // 500 lines 
        else if(cond==2)
           // code 2  // 500 lines 
        else if(cond==3)
          // code 3 // 500 lines         


*/