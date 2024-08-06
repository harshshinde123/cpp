#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
char Fname [20];
int fd = 0;
printf("Wnter file name : ");
scanf("%s",Fname);
fd= creat(Fname,0777);
if(fd==-1)
{
    printf("Unable to create file\n");
}
else
{
    printf("file is sucessfully FD %d\n",fd);
}
    return 0;
}