#include <iostream>
using namespace std;

void printarr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swapAlternate(int arr[], int n)
{

    for (int i = 0; i < n; i += 2)
    {
        if (i + 1 < n)
        {
            // swap(arr[i], arr[i+1]);
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
}

int main()
{
    int even[8] = {2, 4, 5, 7, 9, 0, -5, -8};
    int odd[5] = {10, 30, 90, 70, 34};

    swapAlternate(even, 8);
    printarr(even, 8);

    cout << endl;

    swapAlternate(odd, 5);
    printarr(odd, 5);

    return 0;
}