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

int cnt[100001];
int num;

void add(int x)
{
    cnt[x]++;
    if (cnt[x] == 1)
        num++;
}

void remove(int x)
{
    cnt[x]--;
    if (cnt[x] == 1)
        num--;
}
int k;
bool good()
{
    return num <= k;
}

void solve()
{
    int n;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> arr[i];
    }
    int l = 0;
    ll res = 0;
    for (int r = 0; r < n; r++)
    {
        /* code */
        add(arr[r]);
        while (!good())
        {
            remove(arr[l]);
            l++;
        }
        res += r - l + 1;
    }
    cout<<res<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    t = 1;
    //    cin >> t;
    while (t--)
    {
        solve();
    }
}