#include <iostream>

using namespace std;
bool prime(int a,int b)
{
    if((a%a == 0 && a%1 == 0) && (b%b == 0 && b%1 == 0))
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool sdv (int a , int b)
{
    if(a + 2 == b)
    {
        return  true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int a,b;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    if(sdv(a,b) && prime(a,b))
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    return 0;
}
