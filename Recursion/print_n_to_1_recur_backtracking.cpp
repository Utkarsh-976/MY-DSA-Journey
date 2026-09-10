#include<iostream>
using namespace std;

void print_n_to_1(int i, int n){
    if(i>n)
    return;

    print_n_to_1(i+1,n);
    cout<<i<<endl;
}

int main(){
    int n;
    cout<<"type:";
    cin>>n;

    print_n_to_1(1,n);


    return 0;
}