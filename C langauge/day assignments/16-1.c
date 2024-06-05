#include<stdio.h>
#include<string.h>
int main()
{
    char arr[]={"sagar"};
    printf("strlen=%d\n",strlen(arr));
    char arr1[5];
    strcpy(arr1,arr);
    printf("strcpy=%s\n",arr1);
     printf("strcpy=%s\n",arr);
    char arr2[]={" Bhilawade"};
    strcat(arr1,arr2);
    printf("strcat=%s\n",arr1);
    int result=strcmp(arr,arr2);
    int res=strcmp(arr1,arr2);
    int r=strcmp(arr2,arr);
    int re=strcmp("Sagar","sagar");
    int resu=stricmp("Sagar","sagar");
    int resul=stricmp(arr1,arr2);
    int R=stricmp(arr2," Bhilawade");
     printf("Strcmp=%d\n",result);
     printf("Strcmp=%d\n",res);
     printf("Strcmp=%d\n",r);
     printf("Strcmp=%d\n",re);
     printf("Strcmp=%d\n",resu);
     printf("Strcmp=%d\n",resul);
     printf("Strcmp=%d\n",R);
     printf("strrev=%s\n",strrev(arr2));
     printf("strrev=%s\n",arr2);
     char *n=strchr(arr1,'B');
     printf("char found at pos:%d\n",n-arr1+1);
     char *p=strstr(arr1,"hila");
     printf("str found at pos:%d\n",p-arr1+1);
     char arr3[20];
      strncpy(arr3,arr1,5);
      printf("strncpy=%s\n",arr3);
       printf("strncpy=%s\n",arr1);
       char str[]={"Rut"};
       char str1[]={"Sagaraa"};
       strncat(str,str1,5);
       printf("strncat=%s\n",str);
       printf("strncat=%s\n",str1);
       char str2[]={"RutS"};
      int f= strncmp(str,str2,4);
      printf("strncmp=%d\n",f);

     








      


    
  
}