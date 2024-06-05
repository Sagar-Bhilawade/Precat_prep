#include<stdio.h>
int row,col;
void accept_array(int arr[row][col],int row,int col);
void display_array(int arr[row][col],int row,int col);
int sum_row_array(int arr[row][col],int row,int col,int r);
int sum_col_array(int arr[row][col],int row,int col,int c);
int main()
{
int r,c;
printf("Enter the number of rows and col that you wanna in 2-d array: ");
scanf("%d%d",&row,&col);
int arr[row][col];
printf("Enter the array elements:");
accept_array(arr,row,col);
display_array(arr,row,col);
printf("Enter the row whose sum you wanna print:");
scanf("%d",&r);
int sum=sum_row_array(arr,row,col,r);
printf("Sum of given row is=%d\n",sum);
printf("Enter the col whose sum you wanna print:");
scanf("%d",&c);
 sum=sum_col_array(arr,row,col,c);
printf("Sum of given col is=%d\n",sum);
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
int sum_row_array(int arr[row][col],int row,int col,int r)
{
    int sum=0;
    for(int c=0;c<col;c++)
    {
        sum=sum+arr[r][c];
    }
    return sum;

}
int sum_col_array(int arr[row][col],int row,int col,int c)
{
    int sum=0;
    for(int r=0;r<row;r++)
    {
        sum=sum+arr[r][c];
    }
    return sum;
    
}


