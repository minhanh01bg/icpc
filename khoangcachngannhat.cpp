#include<bits/stdc++.h>
using namespace std;
#define FOR(i,l,r) for (int i=l;i<=r;i++)
#define BEGIN() int t;cin>>t;while(t--)
#define FAST() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long 
#define endl "\n"

const int mod = 1e9 + 7;
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll m,n,c1,c2;
	cin>>m>>n>>c1>>c2;
	ll A[m],B[n];
	for(int i=0;i<m;i++) cin>>A[i];
	for(int i=0;i<n;i++) cin>>B[i];
	
	int dem;
	sort(A, A + m);
	sort(B, B + n);

	int a = 0, b = 0;
	ll min= 1e18;
	while (a < m && b < n)
	{
		if (abs(A[a] - B[b]) < min){
			min = abs(A[a] - B[b]);
			dem=0;
		}
		if (abs(A[a] - B[b]) == min)
			dem++;	
		if (A[a] < B[b])
			a++;

		else
			b++;
	}
	ll res=min + abs(c1-c2);
	cout<<res<<" "<<dem;
	return 0;
}