#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT No, UINT Pos1,UINT pos2)
{
    UINT iMask1 = 0X00000001; 
    UINT iMask2 = 0X00000001;
    UINT iMask = 0;   // UINT iMask = 1;
    UINT Result = 0;

    if((Pos1 < 1) || (Pos1 > 32)||(pos2 < 1) || (pos2 > 32))
    {
        printf("Invalid position, it should between 1 to 32\n");
        return false;
    }

    iMask1 = iMask1 << (Pos1 -1); 
    iMask2 = iMask2 << (pos2 -1); // Dynamic Mask Formation
    iMask = iMask1 | iMask2;
    Result = No & iMask;

    if(Result == iMask)
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
    UINT Value = 0;
    UINT Position1 = 0;
    UINT Position2= 0;

    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d",&Value);

    printf("Enter the position1 of bit\n");
    scanf("%d",&Position1);

    printf("Enter the position2 of bit\n");
    scanf("%d",&Position2);

    bRet = CheckBit(Value,Position1,Position2);

    if(bRet == true)
    {
        printf("Bit at the position %d & %d is ON\n",Position1,Position2);
    }
    else
    {
        printf("Bit at the position %d & %d is OFF\n",Position1,Position2);
    }
    return 0;
}