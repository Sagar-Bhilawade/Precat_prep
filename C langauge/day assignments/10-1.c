#include<stdio.h>
int is_prime(int n);
void print_primes(int min,int max);
int main()
{
    int num,min,max;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("\nEnter the numbers min & max betn prime numbers you wanna print:");
    scanf("%d%d",&min,&max);
    if (is_prime(num))
    {
        printf("NUmber is prime.");
    }
    else
    {
        printf("Number is not prime.");
    }
    print_primes(min,max);
    return 0;
}
int is_prime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
          return 0;
        }
    }
    return 1;
}
void print_primes(int min,int max)
{    printf("\nPrime numbers given in range:");
  
    for (int n=min; n <=max; n++)
    {  
        int i,count=0;
        for ( i = 2; i < n; i++)
        {   
          
            if(n%i==0)
            {
                count++;
            }
        }
     
        if(count==0)
        {   if(n>1)
            printf("%4d",n);
        }
        
    }
    
}
