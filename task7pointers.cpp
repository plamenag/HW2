#include <iostream>

using namespace std;
void print (int *a,int n,int sz)
{
   for(int i=0;i < sz;i++)
   {
       if(a[i]!=n)
       {
           cout<<a[i]<<" ";
       }
   }
    cout<<endl;

}
bool a (int *a,int n,int sz)
{
    for(int i = 0 ;i<sz;i++)
    {
        if(a[i]!=n)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

int main()
{
    int arr[100];
    int number;
    int sz;
    cout<<"Enter size:"<<endl;
    cin>>sz;
    cout<<"Enter numbers:"<<endl;
    for(int i = 0 ; i < sz ; i++)
    {
        cin>>arr[i];

    }
    cout<<"Enter number:"<<endl;
    cin>>number;
    print(arr,number,sz);
    if(a(arr,number,sz))
    {
        cout<<"TRUE";
    }
    else
    {
        cout<<"FALSE";
    }



    return 0;
}
