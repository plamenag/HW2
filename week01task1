#include <iostream>

using namespace std;

int abs (int number)
{
    if(number > 0)
    {
        return number;
    }
    else
    {
        return 0-number;
    }
}
double pow(double number, int power)
{
    double numpow = 1;
    if(power > 0)
    {
        for(int i = 0; i<power; i++)
        {

            numpow*=number;
        }
    }
    else
    {
        for(int i = power; i<0 ; i++)
        {
            numpow /= number;
        }
    }
    return numpow;
}
int minn(int number1,int number2)
{
    int min = number1;
    if(min > number2)
    {
        min=number2;
    }
    return min;
}
int maxn (int number1,int number2)
{
    int max = number1;
    if(max<number2)
    {
        max=number2;
    }
    return max;
}
bool isAlpha(char character)
{
    if((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z'))
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool isDigit(char character)
{
    if(character >= '0' && character <= '9')
    {

        return true;

    }
    else
    {
        return false;
    }
}
int main()
{
    int number;
    cout<<"Enter number";
    cin>>number;
    cout<<"Absolute value "<<abs(number)<<endl;

    int power,n;
    cout<<"Enter number:";
    cin>>n;
    cout<<"Enter power:";
    cin>>power;
    cout<<pow(n,power)<<endl;

    int number1,number2;
    cout<<"Enter two numbers"<<endl;
    cin>>number1>>number2;
    cout<<"Min number:"<<minn(number1,number2)<<endl;
    cout<<"Max number:"<<maxn(number1,number2)<<endl;

    int n1,n2,n3;
    cout<<"Enter three numbers:"<<endl;
    cin>>n1>>n2>>n3;
    cout<<"Min number: "<<minn(n3,minn(n1,n2))<<endl;
    cout<<"Max number: "<<maxn(n3,maxn(n1,n2))<<endl;

    char character;
    cout<<"Enter character"<<endl;
    cin>>character;
    if(isAlpha(character))
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }

    char character1;
    cout<<"Enter character"<<endl;
    cin>>character1;
    if (isDigit(character1))
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;

    }
    return 0;
}
