#include <iostream>
using namespace std;

void sumOfFirst_n(int i, int sum)
{
    if (i < 1)
    {
        cout << sum;
        return;
    }

    sumOfFirst_n(i - 1, sum + i);
}

int main()
{
    int n;
    cout << "type:";
    cin >> n;

    sumOfFirst_n(n,0);
    
    return 0;
}