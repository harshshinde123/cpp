#include<iostream>
using namespace std;
template <class T>
void Display(T Arr[],int isize)
{
    int icnt = 0;
    for ( icnt = 0; icnt <isize; icnt++)
    {
        cout<<Arr[icnt]<<"\n";
    }
    
}

int main()

{
int data[]={10,20,30,40};
Display(data,4);

double datac[]={10.2,20.3,30.6,40.7};
Display(datac,4);

char datab[]={'a','b','c','d','e'};
Display(datab,5);

return 0;

}