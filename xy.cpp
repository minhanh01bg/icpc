#include<bits/stdc++.h>
using namespace std;
bool prime(int n){
    if(n<2) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}
bool Sum(int n){
    int d=0,x;
    while(n){
        d+=(n%10);
        x=n%10;
        if(x!=2 && x!=3 && x!=5 && x!=7) 
            return false;
        n/=10;
    }
    if(prime(d)) return true;
    return false;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int d=0;
        for(int i=n;i<=m;i++){

            if(Sum(i)&&prime(i)) d++;
        }
        cout<<d<<endl;
    }
}