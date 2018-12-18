#include <iostream>

using namespace std;
const int SIZE = 100;
int averege(double a[],int n)
{
    int last = 0;

    for(int i = 1;i<n-1;i++)
    {
        if(a[i]==((a[i-1]+a[i+1])/2))
        {
            last=i;
        }
    }
    if(last != 0)
    {
        return last;
    }
    else
    {
        return -1;
    }

}
int main()
{
    double a[SIZE];
    int n;
    cout<<"Enter size:"<<endl;
    cin>>n;
    cout<<"Enter numbers"<<endl;
    for(int i = 0 ; i < n ; i++)
    {
        cin>>a[i];
    }

    cout<<averege(a,n)<<endl;

    return 0;
}
