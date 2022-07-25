#include<bits/stdc++.h>
using namespace std;

bool linearsearch( int arr[] , int size , int key){

    for( int i = 0; i < size; i++){

        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}

int main(){

    int key;
    cout << "Enter  Key :"<<endl;
    cin >> key;

    int arr[10] = { 2, 3, 4, 7, 0, 45, 38, 45, 34, 35 };

    bool found = linearsearch(arr, 10, key);

    if ( found ){
        cout << " Key is Present "<<endl;
    }
    else{
        cout << " Key is Absent "<<endl;
    }

}