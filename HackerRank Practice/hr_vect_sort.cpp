#include <bits/stdc++.h>

#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define f(i,a,b) for(i=a;i<b;i++)
#define fe(i,a,b) for(i=a;i<=b;i++)
#define fr(i,a,b) for(i=a;i>=b;i--)
#define endl '\n'
#define ll long long int
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define mod 1000000007

using namespace std;

void print(vector<ll>& a, char sep = ' ')
{
    for(auto i : a) { cout<<i<<sep; }
}

ll mod_opr(ll num)
{
    return num % mod;
}

bool compare(ll x, ll y)
{
    return x > y ? true : false;
}

int main()
{
    
    ll n;
    cin>>n;
    n = mod_opr(i);
    vector<ll> v(n);
    for(auto& i : v) { cin>>i; i = mod_opr(i); }
    sort(v.begin(), v.end());
    print(v);
    return 0;

}