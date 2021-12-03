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
 
const int N=1e7+10;
ll arr[N];

void solve()
{
    
}
 
int main()
{
    int n,m;
    cin>>n>>m;
    ll mx=-1;
    while(m--)
    {
        int a,b,k;
        cin>>a>>b>>k;

        arr[a]+=k;
        arr[b+1]-=k;        
        
    }
    // performing prefix sum
        for(int i=1;i<=n;i++)
        {
            arr[i]+=arr[i-1];
        }

        
        for(int i=1;i<=n;i++)
        {
            if(arr[i]>mx)mx=arr[i];
        }
    cout<<mx<<endl;
}