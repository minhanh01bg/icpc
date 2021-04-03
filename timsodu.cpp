#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define run() int t;cin>>t;while(t--)
#define endl "\n"
/**/
//tìm số dư
#define mod 4
bool mdo(string n){
    int d=0;
    for(int i=0;i<n.length();i++){
        d=(d*10+(n[i]-'0'))%mod;
    }
    return (d==0)?true:false;
}

int main(){
    run(){
        string n;
        cin>>n;
        int d=mdo(n);
        if(mdo(n)) cout<<4;
        else cout<<0;
        cout<<endl;
    }
}