#include<iostream>
using namespace std;

int findUnique(int *arr, int size)
{
       int ans = 0;
    
    for(int i = 0; i<size; i++) {
        ans = ans^arr[i];
    }
    return ans;
}
int main(){
    int arr[5]={2,3,2,3,5};
    cout<<findUnique(arr,5);

    return 0;
}