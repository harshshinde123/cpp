#include<iostream>
using namespace std;
template <class T>
T Maxi(T Arr[],int isize)
{
    int icnt = 0;
    T max = 0;
    for ( icnt = 0; icnt <isize; icnt++)
    {
        if (Arr[icnt]>max)
        {
            max = Arr[icnt];
        }
    
    }
    return max;
}

int main()

{
int data[]={10,20,30,40};
int iret=maxi(data,4);

double datac[]={10.2,20.3,30.6,40.7};
double dret=maxi(datac,4);


return 0;

}