#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//điểm cân bằng
int trung(int a[],int n,int sum){
    int left=0;
    for(int i=0;i<n;i++){
        sum-=a[i];
        if(sum==left) return i+1;
        left+=a[i];
    }
    return -1;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int sum=0;
        for(int i=0;i<n;i++) {
            cin>>a[i];
            sum+=a[i];
        }
        cout<<trung(a,n,sum)<<endl;
    }
    return 0;   
}