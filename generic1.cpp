#include<iostream>
using namespace std;


double Addition(double i,double j)
{
    double ans=0.0;
    ans=i+j;

    return ans;
}



int main()

{
double a=11.9 , b=10.1,iret=0.0;
iret = Addition(a,b);
cout<<"Additipon is :"<<iret<<"\n";


return 0;



}