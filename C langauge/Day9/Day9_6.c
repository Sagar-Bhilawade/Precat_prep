#include<stdio.h> 

int main()
{
    int num1,num2; 
    int ans;
    int choice;   

    printf("0.Exit\n");
    printf("1.Add\n");
    printf("2.Sub\n");
    printf("3.Mult\n");
    printf("4.Div\n");

    printf("Enter the two numbers :\n");
    scanf("%d%d",&num1,&num2); 

    printf("Enter the choice:");
    scanf("%d",&choice); // 1 

    switch (choice) //1 
    {
    case 1: 
        ans = num1 + num2; 
        printf("%d",ans);  
        break;
        
    case 2: 
        ans = num1 - num2; 
        printf("%d",ans);  
        break;
        
    case 3: 
        ans = num1 * num2; 
        printf("%d",ans);  
        break;
        
    case 4: 
        ans = num1 / num2; 
        printf("%d",ans);  
        break;
    
    default:
        printf("Invalid choice"); 
        break;
    }


    return 0; 
}

/*

      0.Exit
      1.Add
      2.Sub
      3.Mult
      4.Div

      Enter the two numbers 
      2 
      2
      Enter the choice 
      1 
      4 







*/