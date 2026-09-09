#include<iostream>
using namespace std;

void print1_to_n(int i, int n){
    if (i>n)
    return;

    cout<<i<<endl;
    print1_to_n(i+1,n);
    
}

int main(){
    int n;
    cout<<"type:";

    cin>>n;
    print1_to_n(1,n);
}