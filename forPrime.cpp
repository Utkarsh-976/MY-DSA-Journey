#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value: ";
    cin >> n;
    bool ifprime = 1;

    for (int i = 2; i < n; i++)
    {

        if (n % i == 0)
        {
            // cout<<"Not a prime no "<<endl;
            ifprime = 0;
            break;
        }
    }

    if (ifprime == 0)
    {
        cout << "Not a prime no " << endl;
    }
    else
    {
        cout << "Is a prime no";
    }

    return 0;
}