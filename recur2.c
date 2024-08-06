#include<stdio.h>

int AdditionI(int no)
{
    static int sum = 0,icnt=1;
    if (icnt<=no)
    {
        sum = sum+icnt;
        icnt++;
        AdditionI(no);
    }
    return sum;

    
}

int main()
{  int ivalue=0;
    printf("Inside Main\n");
    printf("Enter Number\n");
    scanf("%d",&ivalue);
   int ret= AdditionI(ivalue);
   printf("Addition is :%d\n",ret);
    printf("End of main\n");

    return 0;
}