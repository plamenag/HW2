#include <iostream>

using namespace std;
const int SIZE = 100;
void print (int a[],int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        cin>>a[i];

    }
}
void arr (int a[],int n)
{
    for(int i = n-1;i>=0;i--)
    {
        cout<<a[i]<<" ";
    }
}


int main()
{
    int a[SIZE],n;
    cout<<"Enter size:"<<endl;
    cin>>n;
    print(a,n);
    arr(a,n);
    return 0;
}
