#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the coordinates x & y:");
    scanf("%d%d",&x,&y);
    if(x==0&&y==0)
    {
        printf("point is in on origin.");
    }
    else if(x==0)
    {
      if(y>0)
      printf("point is on positive y axis");
      else
       printf("point is on negative y axis");

    }
     else if(y==0)
    {
      if(x>0)
      printf("point is on positive x axis");
      else
       printf("point is on negative x axis");

    }
    else
    {
        if(x>0)
        {
            if(y>0)
            printf("point is in first quadrant");
            else
            printf("point is in fourth quadrant");
        }
        else
        {   if(y>0)
            printf("point is in second quadrant");
            else
            printf("point is in third quadrant");
            
        }
        
    }
    


}