#include<iostream>
using namespace std;
int Display(int Arr[],int isize)
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

return 0;

}