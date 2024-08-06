#include<iostream>
using namespace std;
template <class T>
T AddDisplay(T Arr[],int isize)
{
    int icnt = 0;
    T isum = 0;
    for ( icnt = 0; icnt <isize; icnt++)
    {
       
        isum= isum+Arr[icnt];

    }
    return isum;
}

int main()

{
int data[]={10,20,30,40};
int iret=AddDisplay(data,4);

double datac[]={10.2,20.3,30.6,40.7};
double dret=AddDisplay(datac,4);


return 0;

}