//In the name of ALLAH

/* Binary Practice Problem: 4.
    Problem link: https://www.spoj.com/problems/BSEARCH1/
    Solution: 
*/
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

#define MOD 1000000007
#define mem(a, b) memset(a, b, sizeof(a))
#define gcd(a, b) __gcd(a, b)
#define sqr(a) ((a) * (a))

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction(a)               \
    cout.unsetf(ios::floatfield); \
    cout.precision(a);            \
    cout.setf(ios::fixed, ios::floatfield);
#define file()                        \
    freopen('input.txt', 'r', stdin); \
    freopen('output.txt', 'w', stdout);

typedef vector<int>::iterator vit;
typedef set<int>::iterator sit;

//int dx[] = {0, 0, +1, -1};
//int dy[] = {+1, -1, 0, 0};
//int dx[] = {+1, 0, -1, 0, +1, +1, -1, -1};
//int dy[] = {0, +1, 0, -1, +1, -1, +1, -1};

template <typename F, typename S>
ostream &operator<<(ostream &os, const pair<F, S> &p)
{
    return os << '(' << p.first << ',' << p.second << ')';
}
template <typename T>
ostream &operator<<(ostream &os, const vector<T> &v)
{
    os << '{';
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        if (it != v.begin())
            os << ',';
        os << *it;
    }
    return os << ',' << ' ';
}

template <typename T>
ostream &operator<<(ostream &os, const set<T> &v)
{
    os << '[';
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        if (it != v.begin())
            os << ',';
        os << *it;
    }
    return os << ']';
}

template <typename T>
ostream &operator<<(ostream &os, const multiset<T> &v)
{
    os << '[';
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        if (it != v.begin())
            os << ',';
        os << *it;
    }
    return os << ']';
}

template <typename F, typename S>
ostream &operator<<(ostream &os, const map<F, S> &v)
{
    os << '[';
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        if (it != v.begin())
            os << ',';
        os << it->first << ' ' << '=' << ' ' << it->second;
    }
    return os << ']';
}

#define dbg(args...)                        \
    do                                      \
    {                                       \
        cerr << #args << ' ' << ':' << ' '; \
        faltu(args);                        \
    } while (0)
void faltu()
{
    cerr << endl;
}

template <typename T>
void faltu(T a[], int n)
{
    for (int i = 0; i < n; ++i)
        cerr << a[i] << ' ';
    cerr << endl;
}

template <typename T, typename... hello>
void faltu(T arg, const hello &...rest)
{
    cerr << arg << ' ';
    faltu(rest...);
}

int lower(vi &v, int n, int x)
{
    int l, r, ans = n;
    l = 0;
    r = n - 1;
    while (l <= r)
    {
        int mid = (l + r) >> 1;
        if (v[mid] >= x)
        {
            ans = min(mid, ans);
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    return ans;
}

int main()
{
    optimize();
    int n, q;
    cin >> n >> q;
    vi arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];
    while (q--)
    {
        int x;
        cin >> x;
        int ans = lower(arr, n, x);
        if (ans == n)
            ans = -1;
        else if (arr[ans] != x)
            ans = -1;

        cout << ans << endl;
    }

    return 0;
}