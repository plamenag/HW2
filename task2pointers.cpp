#include <iostream>

using namespace std;
void swap (int *a ,int *b)
{
    int x = *a;
    *a = *b;
    *b = x;
}

void reversed (int *a,int n)
{
    for(int i = 0 ; i < n/2 ; i++)
    {
        swap(a+i,a+n-1-i);
    }
}

int main()
{
    int a[100],n;
    cout<<"Enter size:"<<endl;
    cin>>n;
    for(int i = 0 ; i < n ; i++)
    {
        cin>>a[i];
    }
    reversed(a,n);
    for(int i = 0 ; i<n;i++)
    {
    cout<<a[i]<<" ";
    }

    return 0;
}
