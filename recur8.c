#include<stdio.h>

int StrlenI(char *str)
{
     static int icnt = 0;
    if (*str !='\0')
    {
        if((*str>='A')&&(*str<='Z'))
        {
        icnt++;
        
        }
        str++;
        StrlenI(str);
    }
    return icnt;
    
}

int main()
{
   
  char Arr[20];
    printf("Enter the number\n");
    scanf("%[^'\n']s",Arr);

   int iRet = StrlenI(Arr);

    printf("Sum of digits are : %d\n",iRet);
    
    return 0;
}