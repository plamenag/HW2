#include <iostream>
using namespace std;
const int SIZE = 100;
int chetno (int arr[],int n)
{
    int counter = 0;
    for(int i = 0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            counter++;
        }
    }
    return counter;
}
int nechetno (int arr[],int n)
{
    int counter = 0;
    for(int i = 0;i<n;i++)
    {
        if(arr[i]%2 != 0 )
        {
            counter++;
        }
    }
    return counter;
}

int main()
{
    int arr[SIZE],n;
    cout<<"Enter size:"<<endl;
    cin>>n;
    cout<<"Enter numbers:"<<endl;
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Even ->"<<chetno(arr,n)<<endl;
    cout<<"Odd ->"<<nechetno(arr,n)<<endl;
    return 0;
}
