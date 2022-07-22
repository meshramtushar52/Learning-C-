#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int Rs100,Rs50,Rs20,Rs1;
    
    switch (1)
    {
    case 1:
        Rs100 = n / 100;
        n = n % 100;
        cout<<"100Rs : "<<Rs100<<endl;
    case 2:
        Rs50 = n / 50;
        n = n % 50;
        cout<<"50Rs : "<<Rs50<<endl;
    case 3:
        Rs20 = n / 20;
        n = n % 20;
        cout<<"20Rs : "<<Rs20<<endl;
    case 4:
        Rs1 = n / 1;
        n = n % 1;
        cout<<"1Rs : "<<Rs1<<endl;
    default:
        break;
    }
    return 0;
}