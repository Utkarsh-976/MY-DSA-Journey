#include<iostream>
using namespace std;

void print_n_to_1(int i, int n){
    
    if (i<1)
    return;

    cout<<i<<endl;
    print_n_to_1(i-1,n);
    
}

int main(){
    int n;
    
    cout<<"type:";
    cin>>n;
    print_n_to_1(n,n);
}
