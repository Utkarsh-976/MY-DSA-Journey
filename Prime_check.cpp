#include <iostream>
using namespace std;

int main()
{
    int n;
    int i = 2;
    cout << "Enter the value: ";
    cin >> n;

    while (i < n)
    {
        if (n % i == 0)
        {
            cout << "not prime for " << i << endl;
        }
        else
        {
            cout << "prime for " << i << endl;
        }
        i = i + 1;
    }

    return 0;
}