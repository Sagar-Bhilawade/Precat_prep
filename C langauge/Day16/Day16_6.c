#include<stdio.h> 
int main()
{
    char str[20]; 
    printf("Enter the name");
   //scanf("%s",str); 
   //scanf("%[a-z]",str);
   //scanf("%[A-Z a-z]",str);
   scanf("%[^a-z]",str);
    //printf("%s",str); 

    return 0; 
}
/*
scanf("%[a-z]",str);
// get user input till char in range a-z(small case) 

scanf("%[A-Z a-z]",str);
get user input till char in range a-z(small case)
get user input till char in range A-Z(upper case) 
scanf("%[^a-z]",str);
// get user i/p until any char a-z is found 
//(stop reading at a-z)
*/
