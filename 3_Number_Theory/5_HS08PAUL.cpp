/*

    Problem link: https://www.spoj.com/problems/HS08PAUL/
    solution:
 */
// In the name of ALLAH

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;

#define PB push_back
#define F first
#define S second
#define MP make_pair
#define endl '\n'
#define all(a) (a).begin(), (a).end()
#define sz(x) (int)x.size()
#define mid(l, r) ((r + l) / 2)
#define left(node) (node * 2)
#define right(node) (node * 2 + 1)
#define mx_int_prime 999999937

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

const int MX = 1e7 + 123;
int ans[MX];
bitset<MX> isPrime;
vi primes;
void primeGen(int n)
{
    for (int i = 3; i <= n; i += 2)
        isPrime[i] = 1;
    int sq = sqrt(n);

    for (int i = 3; i <= sq; i += 2)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= n; j += (i + i))
            {
                isPrime[j] = 0;
            }
        }
    }
    isPrime[2] = 1;
    primes.PB(2);
    for (int i = 3; i <= n; i += 2)
    {
        if (isPrime[i])
            primes.PB(i);
    }
}

int main()
{
    optimize();
    int lim = 1e7 + 100;
    primeGen(lim);

    for (int x = 1; x <= 3200; x++)
    {
        for (int y = 1; y <= 60; y++)
        {
            int d = (x * x) + (y * y * y * y);
            if (d > lim)
                continue;
            if (isPrime[d])
                ans[d] = 1;
        }
    }

    for (int i = 1; i <= lim; i++)
        ans[i] += ans[i - 1];
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << ans[n] << endl;
    }

    return 0;
}