#include<stdio.h>
 struct student
    {
        int roll_no;
        char name[20];
        float marks;
    };
  
  int n;
void accept_array(struct student *p);
void display_array(struct student *p);
void sort_array(struct student arr[]);
int main()
{
   
    printf("Enter the no of students of dat u=you wanna print:");
    scanf("%d",&n);
   struct student arr[n];
   printf("Enter the data of students:");
   for (int i = 0; i < n; i++)
   {
      accept_array(&arr[i]);
   }
   printf("information of students:\n");
    for (int i = 0; i < n; i++)
   {
      display_array(&arr[i]);
   }
   sort_array(arr);

   return 0;
}
void accept_array(struct student *p)
{
    
 scanf("%d%s%f",&p->roll_no,p->name,&p->marks);
    
}
void display_array(struct student *p)
{
    
 printf("Roll no:%d Name:%s Marks:%f",p->roll_no,p->name,p->marks);
 printf("\n");
    
}
void sort_array(struct student arr[])
{   printf("After sorting:\n");
   int i=0,j;
   struct student t;
   for(j=i+1;j<n;j++)
   {
      if(arr[i].roll_no>arr[j].roll_no)
      {
         t=arr[i];
         arr[i]=arr[j];
         arr[j]=t;
      }
   }
   for(i=0;i<n;i++)
   {
     printf("Roll no:%d Name:%s Marks:%f\n",arr[i].roll_no,arr[i].name,arr[i].marks); 

   }


}

