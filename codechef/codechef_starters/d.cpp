#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define yes cout << "YES"
#define no cout << "NO"

const int N = 10;
vector<int> palindrome_bits(N);

void solve()
{
    int n;
    cin >> n;

    /* the binary representation of all the exponents of 2(2^n n>1)
    is of the form 100.. in bits and hence if we add 1 to this number
    then the resultant number will be of the form 2^n + 1 (100...001)
    in bits */

    int count = 0;
    vector<int> ans;
    int i = 9;

    while (n != 0 && i >= 1)
    {
        if (n >= palindrome_bits[i])
        {
            ans.push_back(palindrome_bits[i]);
            n -= palindrome_bits[i];
            count++;
            i--;
        }
        else
        {
            i--;
        }
    }

    if (n != 0)
    {
        count += n;
        for (int i = 0; i < n; i++)
            ans.push_back(1);
    }

    cout << count << endl;
    for (auto x : ans)
        cout << x << " ";

    // O(logn)
}

int main()
{
    fast_cin();
    /* finding all the numbers of the form 2^n+1 <=1000 because n is atlmost 1000 */
    for (int i = 0; i <= 9; i++)
    {
        palindrome_bits[i] = pow(2, i) + 1;
    }
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
    return 0;
}