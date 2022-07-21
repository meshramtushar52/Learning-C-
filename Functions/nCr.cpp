#include<bits/stdc++.h>
using namespace std;
 
int fact(int num){
    int fac = 1;

    for (int i = 1;i <= num; i++){

        fac = fac * i;
    }

    return fac;
}

int nCr(int n , int r){

    int num = fact(n);

    int den = fact(r) * fact(n-r);

    return num/den;
}

int main(){
    int n,r;

    cin>>n>>r;

    cout<<"nCr is : "<<nCr(n,r)<<endl;
    
    return 0;
}