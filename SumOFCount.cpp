#include<iostream>
using namespace std;

int main(){
    int n;
    int sum = 0;
    int i = 1;

    cout<<"Enter the value: ";
    cin>>n;

    while(i<=n){
        sum = sum + i;
        i = i + 1;
    }

    cout<<"The sum is: "<<sum;

    return 0;
}