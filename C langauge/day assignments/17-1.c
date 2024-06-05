#include<stdio.h>
int row,col;
void accept_array(int arr[row][col],int row,int col);
void display_array(int arr[row][col],int row,int col);

int main()
{

printf("Enter the number of rows and col that you wanna in 2-d array: ");
scanf("%d%d",&row,&col);
int arr[row][col];
printf("Enter the array elements:");
accept_array(arr,row,col);
display_array(arr,row,col);
return 0;
}
void accept_array(int arr[row][col],int row,int col)
{  
    for(int r=0;r<row;r++)
    {
        for (int c=0;c<col;c++)
        {
            scanf("%d",&arr[r][c]);
        }
        
    }
}
void display_array(int arr[row][col],int row ,int col)
{
     for(int r=0;r<row;r++)
    {
        for (int c=0;c<col;c++)
        {
            printf("%4d",arr[r][c]);
        }
        printf("\n\n");
        
    }
}