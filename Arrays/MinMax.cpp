#include<iostream>
using namespace std;

int getMax( int arr[] , int size ){

    // int max = INT_MIN;
    int maxi = INT_MIN;

    for( int i = 0; i < size; i++){

        maxi = max(maxi , arr[i]);

        // if( arr[i] > max ){
        //     max = arr[i];
        // }
        
    }
    return maxi;
    // return max;
}

int getMin( int arr[] , int size ){

    // int mini = INT_MAX;

    int mini = INT_MAX;

    for( int i = 0; i < size; i++){

        mini = min(mini , arr[i]);

        // if( arr[i] < min ){
        //     min = arr[i];
        // }
        
    }
    return mini;
    // return min;
}

int main(){

    int size;
    cin >> size;


    //Bad Practice
    // int num[size];

    int num[100];

    for(int i = 0; i < size; i++){

        cin >> num[i];
    }

    cout<<"Max Value is : "<<getMax(num,size)<<endl;
    cout<<"Min Value is : "<<getMin(num,size)<<endl;

    

    return 0;
}