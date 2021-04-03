#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n";
// bool search(int a[],int n){
//     unordered_map<ll,ll>b;

//     for(int i=0;i<n;i++){
//         b[a[i]]++;
//     }
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             ll p=sqrt(a[i]*a[i]+a[j]*a[j]);
//             double q=sqrt(a[i]*a[i]+a[j]*a[j]);
//             if(q==p && b[p]!=0) return true;        
//         }
//     }

//     return false;
// }

bool isTriplet(ll arr[], ll n)
{
    for (int i = 0; i < n; i++)
        arr[i] = arr[i] * arr[i];
    sort(arr, arr + n);

    for (int i = n - 1; i >= 2; i--) {
       
        int l = 0; 
        int r = i - 1; 
        while (l < r) {
            
            if (arr[l] + arr[r] == arr[i])
                return true;
 
           
            (arr[l] + arr[r] < arr[i]) ? l++ : r--;
        }
    }

    return false;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        if(isTriplet(a,n)) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
}