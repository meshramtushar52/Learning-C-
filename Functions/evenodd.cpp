#include<bits/stdc++.h>
using namespace std;
 
//Return 0 for Even
//Return 1 for Odd
bool isEven(int a){
    if(a&1){
        return 0;
    }
    else{
        return 1;
    }
}

int main()
{
    int num;
    cin>>num;
    if(isEven(num)){
        cout<<"Even"<<endl;
    }
    else{
        cout<<"Odd"<<endl;
    }
    return 0;
}