#include<bits/stdc++.h>

using namespace std;

#define ll long long ;
#define endl "\n"
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;

    while(t--){
        int x[4],y[4],z[4];
        for(int i=0;i<4;i++){
            cin>>x[i]>>y[i]>>z[i];
        }
        int AB[3];
        AB[0]=x[1]-x[0];
        AB[1]=y[1]-y[0];
        AB[2]=z[1]-z[0];

        int AC[3];
        AC[0]=x[2]-x[0];
        AC[1]=y[2]-y[0];
        AC[2]=z[2]-z[0];

        int det[3];
        det[0]=AB[1]*AC[2]-AB[2]*AC[1];
        det[1]=AB[2]*AC[0]-AB[0]*AC[2];
        det[2]=AB[0]*AC[1]-AB[1]*AC[0];
        
        int AD[3];
        AD[0]=x[3]-x[0];
        AD[1]=y[3]-y[0];
        AD[2]=z[3]-z[0];
        int s=0;
        for(int i=0;i<3;i++)
            s+=det[i]*AD[i];
        if(s==0) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
}