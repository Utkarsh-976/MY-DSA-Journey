#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value: ";
    cin >> n;

    cout << "The value frm 1 to " << n << " is :" << endl;

    // for(int i = 1; i<=n; i++){
    //     cout << i<<endl;
    // }

    int i = 1;

    for (;;)
    {

        if (i <= n)
        {
            cout << i << endl;
            i++;
        }
        else
        {
            break;
        }
    }

    for (int a = 0, b = 1, c = 2; a >= 0 && b >= 1 && c >= 2; a--, b--, c--)
    {
        cout << a << " " << b << " " << c << endl;
    }

    return 0;
}