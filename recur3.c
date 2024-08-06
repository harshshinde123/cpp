#include<stdio.h>

void Factors(int no)
{
    static int i=1;
    if (  i <=(no/2) )
    {
        if (no % i ==0)
        {
        printf("%d",i);
        
        }
        i++;
        Factors(no);
    }
    

    
}

int main()
{  int ivalue=0;
    printf("Inside Main\n");
    printf("Enter Number\n");
    scanf("%d",&ivalue);
    Factors(ivalue);
  
    printf("End of main\n");

    return 0;
}