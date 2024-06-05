#include<stdio.h>
void factors(int n);
int main()
{
    int n;
    printf("Enter the number whose factors you wanna print:");
    scanf("%d",&n);
    factors(n);
    return 0;

}
void factors(int n)
{    printf("Factors of %d are:",n);
    for(int i=1;i<n;i++)
    {  
        if(n%i==0)
        {
            printf("%4d",i);
            continue;
        }
    }
}