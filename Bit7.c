#include<stdio.h>
typedef unsigned int UINT;
UINT OffBits(UINT no,UINT pos)
{
UINT imask = 0x00000001;
UINT result = 0;
imask = imask <<(pos-1);
imask = ~imask;
result = no & imask;
return (result);

}
int main()
{
    UINT value =0,position  = 0;
    int ret = 0;
    printf("Enter no:\n");
    scanf("%d",&value);
    printf("Enter position:\n");
    scanf("%d",&position);
    ret = OffBits(value,position);
    printf("Number are : %d\n",ret);
    return 0;
}