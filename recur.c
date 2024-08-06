#include<stdio.h>
void displayI()
{
    int icnt = 1;
    while (icnt<=4)
    {
        printf("*\t");
        icnt++;
    }
    
}
void displayR()
{
    static int icnt = 1;
    if (icnt<=4)
    {
        printf("*\t");
        icnt++;
        displayR;//Recursive call
    }
    
}
int main()
{

  displayR();
    return 0 ;
}