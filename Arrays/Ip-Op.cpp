#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];
    int i;
    for(i = 0;i < n;i++){
        cin>>arr[i];
    }

    cout<<"The Array is :"<<endl;

    for(i = 0;i < n;i++){
        cout<<arr[i]<<endl;
    }
}