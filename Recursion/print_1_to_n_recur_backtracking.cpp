#include<iostream>
using namespace std;
// Printing one and using backtracking recursion
void print1_to_n(int i, int n){
    if (i<1)
    return;

    print1_to_n(i-1,n);
    cout<<i<<endl;
    
}

int main(){
    int n;
    cout<<"type:";

    cin>>n;
    print1_to_n(n,n);
}