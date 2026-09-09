#include<iostream>
using namespace std;

void printName(int i, int n){
    if (i>n)
    return;

    cout<<"Utkarsh"<<endl;
    printName(i+1,n);
    
}

int main(){
    int n;
    cout<<"type:";

    cin>>n;
    printName(1,n);
}