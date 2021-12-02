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
    
}
 
int main()
{
    // print the factorial of a given number 
    // n<=100
    // and print in modulo where M=47

    int n;
    ll ans;
    cin>>n;

    int M=47;


    for(int i=2;i<n;i++)
    {
        ans=(ans*i)%M;
    }
    cout<<ans;
}