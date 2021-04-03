#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define run() int t;cin>>t;while(t--)
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    run(){
        int n;cin>>n;
        double a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i]>>b[i];
        }
        double s=0;
        for(int i=0;i<n-1;i++)
             s+=(a[i]*b[i+1]-a[i+1]*b[i]);
        s+=(a[n-1]*b[0]-b[n-1]*a[0]);
        s=abs(s)/2;
        cout<<setprecision(3)<<fixed<<s<<endl;
    }
}