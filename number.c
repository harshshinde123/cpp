#include<stdio.h>
void Number( int ivalue)
{
  int i=1;
   for( i=1;i<=10;i++){
   
   printf("%d",ivalue*i);
   }
    
}
int main()
{
    int no=0;
    printf("Enter number\n");
    scanf("%d",&no);
   
    return 0;
}