#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define run() int t;cin>>t;while(t--)
int main(){
    double n;
    cin>>n;
    double x=sqrt(n);
    cout<<setprecision(4)<<fixed<<x/(2+sqrt(2)+sqrt(6));
}