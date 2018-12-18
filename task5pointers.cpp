#include <iostream>

using namespace std;
void str(char *arr)
{
    for(int i = 0 ; arr[i]!= '\0' ; i++)
    {
        if(arr[i]!= 'a' && arr[i]!='e' && arr[i]!='i' && arr[i]!='o' && arr[i] != 'u')
        {
            cout<<arr[i];
        }
    }

}


int main()
{
    char arr[42];
    cin.getline(arr,42);
    str(arr);

    return 0;
}
