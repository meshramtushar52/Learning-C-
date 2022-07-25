#include<bits/stdc++.h>
using namespace std;

int main(){

    int size;
    cin >> size;

    char ch[100];

     for( int i = 0; i < size; i++){

        cin >> ch[i] ;
    }

    for( int i = 0; i < size; i++){

        cout << ch[i] << " ";
    }

    return 0;
}