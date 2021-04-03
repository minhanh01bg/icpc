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


bool check(ll p, ll n) {
    ll temp = p, count = 0, f = 5;
    while (f <= temp) {
        count += temp/f;
        f = f*5;
    }
    return (count >= n);
}
ll findNum(ll n) {
    if (n==1)
        return 5;
    ll low = 0;
    ll high = 5*n;

    while (low <high) {
        ll mid = (low + high) >> 1;
        if (check(mid, n))
            high = mid;
        else
            low = mid+1;
    }
    return low;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    run(){
        ll n;
        cin>>n;
        cout<<findNum(n)<<endl;
    }
}