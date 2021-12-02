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
    vector<int> arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];

    int max_ele=*max_element(arr.begin(), arr.end());
    int min_ele=*min_element(arr.begin(),arr.end());

    cout<<max_ele-min_ele;
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