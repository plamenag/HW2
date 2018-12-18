#include <iostream>

using namespace std;
void merge (int *a,int n,int *b,int sz,int *c)
{
    int i=0,j=0;
    int k=0;
    while(i<n && j<sz)
    {
        if(a[i]<b[j])
        {
            c[k]=a[i];
            i++;
        }
        else
        {
            c[k]=b[j];
            j++;
        }
        k++;
    }
    while(i<n)
    {
        c[k]=a[i];
        i++;
        k++;
    }
    while(j<sz)
    {
        c[k]=b[j];
        j++;
        k++;
    }
}


int main()
{
    int a[100],b[100],n,m;
    int c[200];
    cout<<"Enter size:"<<endl;
    cin>>n;
    for(int i = 0 ; i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter size:"<<endl;
    cin>>m;
    for(int i = 0 ; i < m ; i++)
    {
        cin>>b[i];
    }
    merge(a,n,b,m,c);
    for(int i = 0 ;i<n+m;i++)
    {
        cout<<c[i]<<" ";
    }
    return 0;
}
