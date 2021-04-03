#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define run() int t;cin>>t;while(t--)
#define endl "\n"
/**/
/*xem phim*/
bool check(int a[],int n,ll k){
    sort(a,a+n);
    int l,r;
    for(int i=0;i<n-2;i++){
        ll sum=k-a[i];
        l=i+1;
        r=n-1;
        while(l < r){
            if(a[l]+a[r]==sum) return true;
            else if(a[l]+a[r]<sum) l++;
            else r--;
        }
    }
    return false;
}
bool find3Numbers(ll A[], ll arr_size, ll sum) { 
    for (int i = 0; i < arr_size - 2; i++) { 
        unordered_set<int> s; 
        ll curr_sum = sum - A[i]; 
        for (int j = i + 1; j < arr_size; j++)   { 
            if (s.find(curr_sum - A[j]) != s.end())  
                return true; 
            
            s.insert(A[j]); 
        } 
    } 
    return false; 
}
int main(){
    run(){
        int n;int k;
        cin >> n >> k;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        // cout<<b(a,n,k)<<endl;
        if(check(a,n,k)) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
}