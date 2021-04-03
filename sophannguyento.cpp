#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define EL printf("\n")
#define OK printf("OK")
#define pb push_back
#define mp make_pair
#define ep emplace_back
#define X  first
#define Y  second
#define fillchar(a,x) memset(a, x, sizeof(a))
#define FOR(i,l,r) for (int i=l;i<=r;i++)
#define FORD(i,r,l) for (int i=r;i>=l;i--)
const int p = 1e9;
#define run() int t;cin>>t;while(t--)
#define endl "\n"
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    run(){
        int n;
        cin>>n;
        int a[]={1,2  ,4,6  ,12  ,24  ,36  ,48 ,60,120  ,180  ,240  ,360 ,720  ,840,1260,1680,2520 ,5040  ,7560  ,10080,15120,20160,
        25200,27720, 45360,50400,55440 ,83160 ,110880, 166320,  221760, 277200, 332640, 498960, 554400, 665280,720720 , 1081080  ,
        1441440,2162160 ,2882880,3603600, 4324320, 6486480, 7207200 , 8648640, 10810800}; 
        for(int i=0;i<=100;i++){
            if(a[i]>=n) {
                cout<<a[i];
                break;
            }
        }
        cout<<endl;
    }
}

