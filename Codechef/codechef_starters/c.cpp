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
 

void solve()
{
    int n;
    cin>>n;

    string a,b;
    cin>>a>>b;

    int count=0;

    bool if_true=false;
    if_true=b[n-1]>a[n-1];
    if(if_true)count++;

    for(int i=n-2;i>=0;i--)
    {
        if(b[i]>a[i])
        {
            if_true=true;
            count++;
        }
        else if(b[i]<a[i])if_true=false;
        else
        {
            if(if_true)count++;
        }
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