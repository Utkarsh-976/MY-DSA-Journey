#include <iostream>
using namespace std;

void reverse(int arr[], int n)
{

    int start = 0;
    int end = n-1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printarry(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int even[6] = {10, 20, 30, 40, 50, 60};
    int odd[5] = {50, 40, 30, 20, 10};

    reverse(even, 6);
    reverse(odd, 5);

    printarry(even, 6);
    printarry(odd, 5);

    return 0;
}