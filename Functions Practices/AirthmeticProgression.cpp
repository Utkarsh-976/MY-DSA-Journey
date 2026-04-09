#include<iostream>
using namespace std;

int AP(int n){
    int ap =  (3 * n + 7);
    return ap;
}

int main(){

    int n1;
    cout<<"Enter value: ";
    cin>>n1;

    int ans = AP(n1);

    cout<<"Ans is "<<ans;

    return 0;
}