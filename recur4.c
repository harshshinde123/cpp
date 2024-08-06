#include<stdio.h>

int Fact(int no)
{
    static int sum = 1,icnt=1;
    if (icnt<=no)
    {
        sum = sum * icnt;
        icnt++;
       Fact(no);
    }
    return sum;

    
}

int main()
{  int ivalue=0;
    printf("Inside Main\n");
    printf("Enter Number\n");
    scanf("%d",&ivalue);
   int ret= Fact(ivalue);
   printf("Addition is :%d\n",ret);
    printf("End of main\n");

    return 0;
}