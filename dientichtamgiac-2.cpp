#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define run() int t;cin>>t;while(t--)

// AD*AE/AB*AC=1/k;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    run(){
        int k;
        cin>>k;
        double a[4],b[4];
        for(int i=0;i<4;i++){
            cin>>a[i]>>b[i];
        }
        double s=abs((a[0]*b[1]+a[1]*b[2]+a[2]*b[0]-b[0]*a[1]-b[1]*a[2]-b[2]*a[0])/2);
        if(s==0) {
            cout<<"No solution"<<endl;
            continue;
        }
        double K=s/k;//area ADE
        
        double AC=sqrt(pow(a[2]-a[0],2)+pow(b[2]-a[0],2));
        double AB=sqrt(pow(a[1]-a[0],2)+pow(b[1]-b[0],2));
        double AD=sqrt(pow(a[3]-a[0],2)+pow(b[3]-b[0],2));
        if(AB/AD>k) {
            cout<<"No solution"<<endl;
            continue;            
        }
        double c=k/(AB/AD);
        c=1/c;
        double t1=(1-c)*(a[0]-a[2]);
        double t2=(1-c)*(b[0]-b[2]);
        t1+=a[2];
        t2+=b[2];
        cout<<setprecision(2)<<fixed<<t1<<" "<<setprecision(2)<<fixed<<t2<<endl;
    }
}