#include<stdio.h>
typedef unsigned int UINT;
int CountBits(UINT no)
{
int cnt = 0;
int Digit = 0;
while (no%2)
{
    Digit = no%2;
    if(Digit==1)
    {
        cnt++;
    }
    no=no/2;
    
}
return cnt;

}
int main()
{
    UINT value =0;
    int ret = 0;
    printf("Enter no:\n");
    scanf("%d",&value);
    ret = CountBits(value);
    printf("Number are : %d\n",ret);
    return 0;
}