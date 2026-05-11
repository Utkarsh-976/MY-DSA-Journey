#include<iostream>
using namespace std;

//Function Signature
void printcounting(int num) {

//    cout << n << endl;
    //Function Body 
    for(int i=1; i<=num; i++) {
        cout<< i << " ";
    }
    cout<<endl;
}

int main() {

    int n;
    cin >> n;

    //function Call
    printcounting(n);


    return 0;
}
