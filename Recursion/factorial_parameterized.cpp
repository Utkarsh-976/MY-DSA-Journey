#include <bits/stdc++.h>
using namespace std;

void factorial(int i, int fact)
{
    if (i < 1)
    {
        cout << fact;
        return;
    }

    factorial(i - 1, fact * i);
}

int main()
{
    int n;
    cout << "type:";
    cin >> n;

    factorial(n,1);
    
    return 0;
}
