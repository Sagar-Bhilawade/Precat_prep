#include<stdio.h>
int power(int base,int index);
int main()
{
    int base,index,ans;
    printf("Enter the base and index:");
    scanf("%d%d",&base,&index);
    ans=power(base,index);
    printf("%d of the power of %d:%d",base,index,ans);
}
int power(int base,int index)
{
    int ans=1;
    for ( int i =1 ; i <= index; i++)
    {
        ans=ans*base;
    }
    return ans;
    
}