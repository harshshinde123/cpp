#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;
bool Toggle(UINT no)
{
UINT imask = 8;
UINT result = 0;
result = no ^ imask;
if (result ==  imask)
{
    return true;
}
else
{
    return false;
}
}


int main()
{
    UINT value =0;
    int ret = false;
    printf("Enter no:\n");
    scanf("%d",&value);
    ret = Toggle(value);
   if (ret==true)
   {
    printf("4th bit is on \n");
   }
   else
   {
    printf("4th bit is off \n");

   }
    return 0;
}