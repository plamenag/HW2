#include <iostream>

using namespace std;
void swap (int *a,int *b)
{
    int x = *a;
    *a = *b;
    *b = x;

}

int main()
{
    int a,b;
    cout<<"Enter two numbers:"<<endl;
    cin>>a>>b;
    swap(&a,&b);
    cout<<a<<" "<<b;
    return 0;
}
