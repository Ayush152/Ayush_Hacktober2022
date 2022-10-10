#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

ll modFact(int n, ll p)
{
    if (n >= p)
        return 0;

    ll result = 1;
    for (int i = 1; i <= n; i++)
    {
        result = (result * i) % p;
        cout << result << endl;
    }

    return result;
}

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    ll mod = 998244353;
    while (t--)
    {
        int n;
        cin >> n;
        int z = n / 2;
        ll a = (modFact(n - 1, mod) / (modFact(z - 1, mod) * modFact(n - z, mod)));
        ll c = 1;
        if (z % 2 == 0)
        {
            a += z;
        }
        else
        {
            a += z - 1;
        }
        ll tot = (modFact(n, mod) / (modFact(z, mod) * modFact(z, mod)));
        cout << tot << endl;
        ll b = tot - (a + c);
        cout << a << " " << b << " " << c << endl;
    }
    return 0;
}
