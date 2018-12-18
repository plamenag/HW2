#include <iostream>

using namespace std;
void matrix (int n , int m)
{
    for(int i = 0 ; i < n ; i ++)
    {
        for(int j = 0 ; j < m ; j ++)
        {
            if(i == j)
            {
                cout<<"("<<i<<")";
            }
            if( j > i )
            {
                cout<<j-i<<" ";
            }
            if( j < i )
            {
                cout<<j*i<<" ";
            }
        }
        cout<<endl;
    }
}

int main()
{
    int n,m;
    cout<<"Enter n:"<<endl;
    cin>>n;
    cout<<"Enter m:"<<endl;
    cin>>m;
    matrix(n,m);

    return 0;
}
