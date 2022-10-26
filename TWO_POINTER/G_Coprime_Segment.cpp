#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define lld long double
#define PI 3.141592653589793238462
#define pb push_back
#define ppb pop_back
#define INF 1e9
#define nl endl
#define ff first
#define ss second
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define getunique(v)                                  \
    {                                                 \
        sort(v.begin(), v.end());                     \
        v.erase(unique(v.begin(), v.end()), v.end()); \
    }
/*---------------------------------------------------------------------------------------------------------------------------*/
ll gcd(ll a, ll b)
{
    if (b > a)
    {
        return gcd(b, a);
    }
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}
void google(int t) { cout << "Case #" << t << ": "; }
vector<ll> sieve(int n)
{
    int *arr = new int[n + 1]();
    vector<ll> vect;
    for (int i = 2; i <= n; i++)
        if (arr[i] == 0)
        {
            vect.push_back(i);
            for (int j = 2 * i; j <= n; j += i)
                arr[j] = 1;
        }
    return vect;
}
/*--------------------------------------------------------------------------------------------------------------------------*/

/*...............................................................*/
const ll N = 2 * 1e6 + 1, MOD = 1e9 + 7;
bool sortbysec(const pair<int, int> &a,
               const pair<int, int> &b)
{
    return (a.second < b.second);
}

struct coprime
{
    vector<ll> s, values = {0};
    void push(ll x)
    {
        s.push_back(x);
        values.push_back(__gcd(values.back(),x));
    }
    ll pop()
    {
        ll res = s.back();
        s.pop_back();
        values.pop_back();
        return res;
    }
    ll gc()
    {
        return values.back();
    }
    bool empty()
    {
        return s.empty();
    }
};
coprime s1, s2;
void add(ll x)
{
    s2.push(x);
}
void remove()
{
    if (s1.empty())
    {
        while (!s2.empty())
        {
            s1.push(s2.pop());
        }
    }
    s1.pop();
}
bool good()
{
    ll g1 = s1.gc();
    ll g2 = s2.gc();
    return __gcd(g1, g2) == 1;
}

void solve()
{
    ll n;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int l = 0;
    ll res = INT_MAX;
    ll r = 0;
    while (r < n)
    {
        add(arr[r]);
        while (good())
        {
            remove();
            res = min(res, r - l + 1);
            l++;
        }
        r++;
    }
    if (res == INT_MAX)
    {
        res = -1;
    }
    cout << res << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt","r", stdin);
    //     freopen("output.txt","w",stdout);
    // #endif
    int t;
    t = 1;
    //    cin >> t;
    while (t--)
    {
        solve();
    }
}