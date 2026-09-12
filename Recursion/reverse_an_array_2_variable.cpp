#include <bits/stdc++.h>
using namespace std;

void rev(int arr[], int l, int r)
{
    if (l >= r)
    {
        return;
    }

    swap(arr[l], arr[r]);
    rev(arr, l + 1, r - 1);
}

int main()
{
    int n;
    cout << "type: ";
    cin >> n;

    int arr[n];

    cout << "type arr: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    rev(arr, 0, n - 1);

    cout << "rev arr: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
