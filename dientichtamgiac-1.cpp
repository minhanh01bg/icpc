#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define run() int t;cin>>t;while(t--)
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    run(){
        double a[3],b[3];
        for(int i=0;i<3;i++){
            cin>>a[i]>>b[i];
        }
        double s=abs((a[0]*b[1]+a[1]*b[2]+a[2]*b[0]-b[0]*a[1]-b[1]*a[2]-b[2]*a[0])/2);
        if(s==0) {
            cout<<"INVALID"<<endl;
            continue;
        }
        else cout<<setprecision(2)<<fixed<<s<<endl;
    }
}