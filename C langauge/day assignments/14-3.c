#include<stdio.h>
int main()
{
    int arr[3];
    printf("Enter the marks of three subjects:");
    for(int i=0;i<3;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(int i=0;i<3;i++)
    {
      sum=sum+arr[i];
    }
    printf("Total=%d\n",sum);
    printf("Average pf marks=%f",1.0f*sum/3);

}