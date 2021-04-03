#include<bits/stdc++.h>

using namespace std;

const int N = 1001;

struct Point {
    long long x, y;
    bool operator<(const Point &v) const { return x == v.x ? y < v.y : x < v.x; }
    long long cross(const Point &p, const Point &q) const { return (p.x - x) * (q.y - y) - (p.y - y) * (q.x - x); }
} p[N], poly[N];

int n;

void enter() {
    cin>>n;
    for (int i = 0; i < n; ++i)
        cin>>p[i].x>>p[i].y;
}
//tính s
double size(Point poly[], int k) {
    double S = (poly[k - 1].x - poly[0].x) * (poly[k - 1].y + poly[0].y);
    for (int i = 1; i < k; ++i)
        S += (poly[i - 1].x - poly[i].x) * (poly[i - 1].y + poly[i].y);
    return S/2;
}

void solve() {
    sort(p, p + n);
    // for(int i=0;i<n;i++) cout<<p[i].x<<" ";
    int k = 0;
    for (int i = 0; i < n; ++i) {
        while (k >= 2 && poly[k - 2].cross(poly[k - 1], p[i]) <= 0) --k;
        poly[k++] = p[i];
    }
    for (int i = n - 2, t = k + 1; i >= 0; --i) {
        while (k >= t && poly[k - 2].cross(poly[k - 1], p[i]) <= 0) --k;
        poly[k++] = p[i];
    }
    cout<<setprecision(3)<<fixed<<size(poly,k)<<endl;
}

int main() {
    int t; 
    cin>>t;
    while(t--){
        enter();
        solve();
    }    

    return 0;
}