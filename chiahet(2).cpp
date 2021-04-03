#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b)
{
    if (a < b)
    {
        int x = a;
        a = b;
        b = x;
    }
    long long r = a % b;
    while (r)
    {
        a = b;
        b = r;
        r = a % b;
    }
    return b;
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m, count = 0, flag;
    cin >> n >> m;
    long long a[n], b[n], A[n], temp; int c[m], t = m;

    for (int i = 0; i < n; i++)
        cin >> A[i];
    
    while (t--)
    {
        flag = 1;
        for (int i = 0; i < n; i++)
            a[i] = A[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                temp = gcd(a[i],b[j]);
                a[i] /= temp;
                b[j] /= temp;
            }
        }

        for (int i = 0; i < n; i++)
            if (b[i] != 1)
            {
                flag = 0;
                break;
            }
        if (flag == 1)
        {
            c[count] = m - t;
            count++;
        }
    }
    cout << count << endl;
    for (int i = 0; i < count; i++)
        cout << c[i] << " ";
}