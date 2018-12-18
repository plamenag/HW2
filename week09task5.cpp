#include <iostream>

using namespace std;
const int MAX_N=100,MAX_M=100;
void LINE (int arr[MAX_N][MAX_M],int n,int m)

{
    for(int i = 0 ; i < n ; i++)
    {
        int countereven = 0;
        int counterodd = 0;

        for(int j = 0; j < m;j++)
        {

            if(arr[i][j]%2==0)
            {
                countereven++;
            }
            else
            {
                counterodd++;
            }
        }
         cout<<"Even/Lines:"<<countereven<<endl;
         cout<<"Odd/Lines:"<<counterodd<<endl;


    }
}
void COl (int arr[MAX_N][MAX_M],int n,int m)
{
    for(int i = 0 ; i < n ; i++)
    {
        int countereven = 0;
        int counterodd = 0;

        for(int j = 0 ; j < m ; j++)
        {
            if(arr[j][i]%2==0)
            {
                countereven ++;
            }
            else
            {
               counterodd ++;
            }
        }
        cout<<"Even/Columns:"<<countereven<<endl;
        cout<<"Odd/Columns:"<<counterodd<<endl;
    }
}

int main()
{
    int arr[MAX_N][MAX_M],n,m;
    cout<<"Enter size n,m"<<endl;
    cin>>n>>m;
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < m ; j++)
        {
            cin>>arr[i][j];
        }
    }


    LINE (arr,n,m);

    COl(arr,n,m);

    return 0;
}
