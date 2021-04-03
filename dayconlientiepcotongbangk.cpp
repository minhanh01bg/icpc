#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// day con lien tiep co tong bang k
bool fun(ll k,int n,int a[]){
    ll sum=0,start=0,i=0;
    while(i<n){
        sum+=a[i];
        
        while(sum > k&& start < i){
            sum-=a[start];
            start++;
        }
        if(sum==k)
            return true;
        i++;
    }
    return false;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        ll k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(fun(k,n,a)==true) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
}