#include<iostream>
using namespace std;
//call by value
void Swap(int x,int y)
{
  int temp;
  temp = x;
  x=y;
  y=temp;
}


int main()
{
 int a=11,b=10;
 cout<<"value of a "<<a<<"\n";
 cout<<"value of a "<<b<<"\n";

 Swap(a,b);

 cout<<"value of a "<<a<<"\n";
 cout<<"value of a "<<b<<"\n";




return 0;

}