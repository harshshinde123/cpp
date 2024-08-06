#include<stdio.h>

int count(int no)
{
    static int icnt=0;
    
    if(no !=0)
    {
    icnt++;
    no = no/10;
    count(no);
    }
    return icnt;

    
}

int main()
{  int ivalue=0;
    printf("Inside Main\n");
    printf("Enter Number\n");
    scanf("%d",&ivalue);
   int ret= count(ivalue);
   printf("count is :%d\n",ret);
    printf("End of main\n");

    return 0;
}