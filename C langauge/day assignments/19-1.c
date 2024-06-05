#include<stdio.h>
int main()
{
    struct student
    {
        int roll_no;
        char name[20];
        float marks;
    };
   struct student a;
   printf("Enter the students roll no,his name and his marks:");
   scanf("%d%s%f",&a.roll_no,a.name,&a.marks);
   printf("Roll no:%d\nName:%s\nMarks:%f\n",a.roll_no,a.name,a.marks);
   return 0;    
}