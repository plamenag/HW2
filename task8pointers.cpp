#include <iostream>

using namespace std;
const int SIZE = 100;
void a(int number,int *a,int n)
{
    for(int i = 0 ; i < n ; i ++)
    {

        if(number == a[i])
        {
        cout<<&a[i];
        }
    }
}
void print (int number,int *a,int n)
{
    int null = 0;
    for(int i = 0 ; i < n; i++)
    {
        if(number == a[i])
        {
            null++;
        }
    }
    if(null == 0)
    {
        cout<<"NULL";
    }
}


int main()
{
    int arr[SIZE],n;
    cout<<"Enter size:"<<endl;
    cin>>n;
    cout<<"Enter numbers"<<endl;
    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr[i];
    }
    int number;
    cin>>number;

    a(number,arr,n);
    print(number,arr,n);

    return 0;
}
