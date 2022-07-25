#include<bits/stdc++.h>
using namespace std;

int ArraySum( int arr[] , int size){

    int sum = 0;

    for ( int i = 0; i < size; i++){

        sum = sum + arr[i];
    }
    return sum;
}

int main(){

    int size;
    cin >> size;

    int arr[100];5
    

    for( int i = 0; i < size; i++){

        cin >> arr[i];
    }

    cout << "Sum Of Array Elements is : " << ArraySum(arr , size) << endl;


    return 0;
}