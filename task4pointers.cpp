#include <iostream>

using namespace std;
const int MAX_N=100,MAX_M=100;
void transp (int a[][MAX_M],int n ,int m)
{
    for(int j = 0 ; j < m ; j++)
    {
        for(int i = n-1;i>=0;i--)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }


}
int main()
{
    int arr[MAX_N][MAX_M];
    int n,m;
    cout<<"Enter sizes n,m"<<endl;
    cin>>n>>m;
    for(int i = 0 ; i < n ; i ++)
    {
        for(int j = 0 ; j < m ; j ++)
        {
            cin>>arr[i][j];
        }
    }
    transp(arr,n,m);


    return 0;
}
