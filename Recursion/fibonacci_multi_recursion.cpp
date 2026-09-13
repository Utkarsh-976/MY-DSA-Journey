#include <iostream>
using namespace std;

int fibo(int n)
{
    if (n <= 1)
        return n;

    // int last = fibo(n-1);
    // int second_last = fibo(n-2);

    // return last + second_last;

    return fibo(n-1)+fibo(n-2);
}

int main()
{
    int n;
    cout<<"type: ";
    cin>>n;  

    cout<<"nth term is: "<<fibo(n);

    return 0;
}