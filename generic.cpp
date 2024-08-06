#include<iostream>
using namespace std;
int Addition(int i,int j)
{
    int ans=0;
    ans=i+j;

    return ans;
}



int main()

{
int a=11 , b=10,iret=0;
iret = Addition(a,b);
cout<<"Additipon is :"<<iret<<"\n";


return 0;



}