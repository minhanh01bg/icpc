#include<bits/stdc++.h>
using namespace std;
void bam(int a[],int b[],int c[],int x,int y,int z){
    int q=1;
    int i=0,j=0,k=0;
    while(1){
        if(i==x||j==y||k==z) break;
        else if(a[i] == b[j] && b[j]==c[k]){
            q=0;
            cout<<a[i]<<" ";
            i++;j++;k++;
        }
        if(a[i]>b[j]) j++;
        if(a[i]<c[k]) i++;
        if(b[j]>c[k]) k++;
    }
    if(q==1) cout<<"NO";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int x, y, z;
        cin>> x >> y >> z;
        int a[x], b[y], c[z];
        
        for(int i = 0;i < x; i++) 
            cin >> a[i];
        for(int i = 0;i < y; i++) 
            cin >> b[i];
        for(int i = 0;i < z; i++) 
            cin >> c[i];
        bam(a,b,c,x,y,z);
        cout<<endl;
    } 
}