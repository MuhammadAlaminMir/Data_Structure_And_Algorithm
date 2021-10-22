/*
    First I Used Harmonic Series to create prime Generation in this problem
    Then I Optimise that algorithm and make it Sieve of Eratosthenes.
    Problem link: https://vjudge.net/problem/UVA-543
    solution
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

// int dx[] = {0, 0, +1, -1};
// int dy[] = {+1, -1, 0, 0};
// int dx[] = {+1, 0, -1, 0, +1, +1, -1, -1};
// int dy[] = {0, +1, 0, -1, +1, -1, +1, -1};

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
        fanc(args);                         \
    } while (0)
void fanc()
{
    cerr << endl;
}

template <typename T>
void fanc(T a[], int n)
{
    for (int i = 0; i < n; ++i)
        cerr << a[i] << ' ';
    cerr << endl;
}

template <typename T, typename... hello>
void fanc(T arg, const hello &...rest)
{
    cerr << arg << ' ';
    fanc(rest...);
}
const int mx = 1e6 + 133;
bool isPrime[mx];
vi primes;

// Sieve of Eratosthenes
void primeGen(int n)
{
    for (int i = 3; i <= n; i += 2)
        isPrime[i] = 1;
    int sq = sqrt(n);

    for (int i = 3; i <= sq; i += 2)
    {
        for (int j = i * i; j <= n; j += (i + i))
        {
            isPrime[j] = 0;
        }
    }

    for (int i = 3; i <= n; i += 2)
    {
        if (isPrime[i])
            primes.PB(i);
    }
}
// void primeGen(int n)
// {
//     mem(isPrime, 1);
//     for (int i = 2; i <= n; i++)
//     {
//         for (int j = i + i; j <= n; j += i)
//         {
//             isPrime[j] = 0;
//         }
//     }
//     isPrime[2] = 0;
//     for (int i = 3; i <= n; i++)
//     {
//         if (isPrime[i])
//             primes.PB(i);
//     }
// }
int main()
{
    optimize();
    primeGen(1e6);
    int n;

    while (cin >> n)
    {
        if (n == 0)
            break;
        int dif = -1, p1 = -1, p2 = -1;
        for (auto u : primes)
        {
            if (u > n)
                break;
            int tp1 = u, tp2 = n - u;
            if (tp2 > 2 && isPrime[tp2] == 1)
            {
                if (abs(tp1 - tp2) > dif)
                {
                    dif = abs(tp1 - tp2);
                    p1 = tp1;
                    p2 = tp2;
                }
            }
        }
        if (p1 == -1)
            cout << "Goldbach's conjecture is wrong." << endl;
        else
            cout << n << " = " << p1 << " + " << p2 << endl;
    }

    return 0;
}