#include <iostream>
using namespace std;
double f (double x)
{
    return ((x*x*x)-5*x);
}
double integral (double a, double b , int n)
{
    double h = (b-a)/n;
    double x = a;
    double sum = 0;
    for(int i = 0;i<n;i++)
    {
        sum+=(h/2)*(f(x)+f(x+h));
        x+=h;
    }
    return sum;
}

int main()
{
    double a,b,n;
    cout<<"Enter a,b,n:"<<endl;
    cin>>a>>b>>n;
    cout<<integral(a,b,n)<<endl;

    return 0;
}
