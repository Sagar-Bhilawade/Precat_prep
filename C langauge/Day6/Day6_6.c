#include<stdio.h> 

int main()
{
    int ans; 
    int a = 1; 

    //ans = a++,a++,a++;  
      ans = ++a,++a,++a; 
    printf("ans=%d a=%d",ans,a); 
}