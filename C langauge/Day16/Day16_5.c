#include<stdio.h> 

int main()
{
    char name[80],city[40],job[60];
//while scanning string from user no need to use addressof operator 
// because string name itself is based address of array 
    printf("Enter the city"); 
    scanf("%s%*c",city);  
//%s will read only upto white-space(space or tab or newline) 
        // if i/p is newyork --> newyork 
        // if i/p new york --> new 
    //scan set 

    printf("Enter the name");
    scanf("%[^\n]%*c",name); 
    //%[^\n] will read upto \n
    // it can read alphabet,digit,space,tab,digit 
    //scanf("%s",name); 

    printf("Enter the job");
    //scanf("%s",job); 
      gets(job); 
// gets() will scan the string upto \n 


 printf("city = %s\n Name=%s\n job=%s\n",city,name,job);    
    return 0; 
}

/*

*/