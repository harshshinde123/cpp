#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
int CreateFile(char name)
{
    int fd = 0;
    fd = creat(name,0777);
    return fd;
}
int main()
{

char Fname [20];
int fd = 0;
printf("Wnter file name : ");
scanf("%s",Fname);
fd= CreateFile(Fname);
if (fd == -1)
{
    printf("Unable to create file\n");
}
else
{
    printf("File is Sucessfully created\n");
}

    return 0;
}