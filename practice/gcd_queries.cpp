#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define yes cout<<"YES"
#define no cout<<"NO"
 
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
     
}


void solve()
{
    int n,q;
    cin>>n>>q;
    vector<int> arr(n+10);
    // prefix gcd
    vector<int> pf_frwd(n+10);
    vector<int> pf_bkwd(n+10);
    pf_frwd[0]=pf_bkwd[n+1]=0;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<=n;i++)
    {
        pf_frwd[i]=gcd(pf_frwd[i-1],arr[i]);
    }
    for(int i=n;i>=1;i--)
    {
        pf_bkwd[i]=gcd(pf_bkwd[i+1],arr[i]);
    }    

    while(q--)
    {
        int l,r;
        cin>>l>>r;
        cout<<gcd(pf_frwd[l-1],pf_bkwd[r+1])<<"\n";
        
    }
}
 
int main()
{
    fast_cin();
    ll t;
    cin >> t;
    while(t--)
    {          
      solve();
      cout<<endl;
    }            
    return 0;
}