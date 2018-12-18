#include <iostream>

using namespace std;
const int SIZE = 100;
int factoriel (int n )
{
    int fact = n ;
    for(int i = n-1;i>0;i--)
    {
        fact*=i;

    }
    return fact;

}
void printarr (int arr[],int n)
{
    for (int i = 0 ; i < n;i++)
    {
        cout<<factoriel(arr[i])<<endl;
    }
}

int main()
{
    int arr[SIZE],n;
    cout<<"Enter size:"<<endl;
    cin>>n;
    cout<<"Enter numbers:"<<endl;
    for(int i = 0; i < n ; i++)
    {
        cin>>arr[i];
    }
    printarr (arr,n);




    return 0;
}
