#include<stdio.h>
int main()
{   int empid,deptno;
    char desgncode;
  
    printf("Enter the employee id,department no. ,designation code: ");
    scanf("%d%d%*c%c",&empid,&deptno,&desgncode);
    printf("Employee with employee id %d is working in",empid);
    switch (deptno)
    {
    case 10:
     printf("\"Marketing\"");
        break;
        case 20:
     printf("\"Management\"");
        break;
        case 30:
     printf("\"Sales\"");
        break;
        case 40:
     printf("\"Desgning\"");
        break;
    
    default:
    printf("invalid");
        break;
    }
    printf("department as");
    switch(desgncode)
    {
      case  'M':
      printf("\"Manager\"");
      break;
      case 'S':
      printf("\"Supervisor\"");
      break;
      case 's':
      printf("\"Security officer\"");
      break;
      case 'C':
      printf("\"clerk\"");
      break;
      default:
      printf("invalid");
        break;




    }
}