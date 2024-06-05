#include<stdio.h> 

struct emp // global structure 
{
    int empno; //4
    char name[20];//20  
    double sal;// 8  
};
void accept_emp(struct emp a[], int n); 
void display_emp(struct emp a[], int n); 
int main()
{
    struct emp arr[3]; 
    //array of structure  

    accept_emp(arr,3); 

    display_emp(arr,3);  

}

void display_emp(struct emp a[], int n)
{       
        int i; 

        for(i=0;i<n;i++)
        {
            printf("%d %s %lf\n",a[i].empno,a[i].name,a[i].sal); 
        }

}   

void accept_emp(struct emp a[], int n)
{
        int i; 
        for(i=0;i<n;i++)
        {
            printf("Enter empid name and sal");
            scanf("%d%s%lf",&a[i].empno,a[i].name,&a[i].sal);  
        }
}







