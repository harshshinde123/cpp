#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;
bool CheckBit(UINT no,UINT pos)
{
    UINT result=0;
    UINT imask = 0X00000001;
  if((pos<1) || (pos>32));
  {
    printf("Invalid position it should be 1 to 32\n");
    return false;
  }
  imask = imask << (pos-1);//dynamic formation mask
  result = no &  imask;
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
    UINT value =0,value2=0;
    bool ret = false;
    printf("Enter no:\n");
    scanf("%d",&value);

    printf("Enter position:\n");
    scanf("%d",&value2);
    ret=CheckBit(value,value2);
    if (ret==true)
    {
        printf("Bit  at pos is %d on\n",value2);

    }
    else
    {
         printf("Bit  at pos is %d off\n",value2);
 
    }
    
    return 0;
}