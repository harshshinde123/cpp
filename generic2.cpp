#include<iostream>//IMP
using namespace std;

template <class T>
T Addition(T i,T j)
{
    T ans;
    ans=i+j;

    return ans;
}
int main()
{ int a=0,b=0;
printf("Enter no\n");
scanf("%d %d",&a,&b);
//double a=11.9 , b=10.1,iret=0.0;
int iret = Addition(a,b);
cout<<"Additipon is :"<<iret<<"\n";

//int x=11 , y=10,ret=0;
//ret = Addition(x,y);
//cout<<"Additipon is :"<<ret<<"\n";

return 0;

}