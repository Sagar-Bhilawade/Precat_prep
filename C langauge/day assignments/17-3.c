#include<stdio.h>
  int m,n;
void add_mattrices(int arr1[m][n],int arr2[m][n],int arr3[m][n]);
void sub_mattrices(int arr1[m][n],int arr2[m][n],int arr3[m][n]);
void multiply_mattrices(int arr1[m][n],int arr2[m][n],int arr3[m][n]);
int main()
{
  
    printf("Enter the order of matrices:");
    scanf("%d%d",&m,&n);
    int arr1[m][n],arr2[m][n],arr3[m][n];
    printf("Enter elements of first array:");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&arr1[i][j]);
        }
        
    }
     printf("Enter elements of second array:");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&arr2[i][j]);
        }
        
    }
    char ch;
    printf("Enter opration:");
    scanf("%*c%c",&ch);
    switch (ch)
    {
    case '+':
        add_mattrices(arr1,arr2,arr3);
        break;
     case '-':
        sub_mattrices(arr1,arr2,arr3);
        break;
         case '*':
        multiply_mattrices(arr1,arr2,arr3);
        break;
    default:
    printf("Invalid operation");
        break;
    }
    for(int i=0;i<m;i++)
    {
      for (int j = 0; j < n; j++)
      {
          printf("%4d",arr3[i][j]);
      }
      printf("\n");
    }

    

}
void add_mattrices(int arr1[m][n],int arr2[m][n],int arr3[m][n])
{
    for(int i=0;i<m;i++)
    {
      for (int j = 0; j < n; j++)
      {
        arr3[i][j]= arr1[i][j]+ arr2[i][j];
      }
      
    }
}
void sub_mattrices(int arr1[m][n],int arr2[m][n],int arr3[m][n])
{
    for(int i=0;i<m;i++)
    {
      for (int j = 0; j < n; j++)
      {
        arr3[i][j]= arr1[i][j]-arr2[i][j];
      }
      
    }
}
void multiply_mattrices(int arr1[m][n],int arr2[m][n],int arr3[m][n])
{
    for(int i=0;i<m;i++)
    {
      for (int j = 0; j < n; j++)
      {
        arr3[i][j]= arr1[i][j]* arr2[i][j];
      }
      
    }
}


