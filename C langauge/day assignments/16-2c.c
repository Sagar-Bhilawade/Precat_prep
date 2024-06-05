#include<stdio.h>
#include<string.h>
void my_strcpy(char str3[],char str1[]);
int main()
{
    char str1[]={"sagar"};
    char str2[]={};
    strcpy(str2,str1);
    printf("machine copy:\n");
    printf("%s\n",str1);
    printf("%s\n",str2);
    char str3[]={};
    my_strcpy(str3,str1);
     printf("my copy:\n");
    printf("%s\n",str1);
    printf("%s\n",str3);

    return 0;

}
void my_strcpy(char str3[],char str1[])
{   int i=0;
    while(str1[i]!=0)
    {
        str3[i]=str1[i];
        i++;
    }
    
}
