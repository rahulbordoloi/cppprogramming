# include <bits/stdc++.h>

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

int main()
{
     
    ll n, min_x = 5e18;
    cin>>n;
    set<ll > x;
    f(i,0,n)
    {
        ll y;
        cin>>x;
        if(x.upper_bound(y) != x.end())
            min_x = min(min_x, *x.upper_bound(y) - y);
        
        x.insert(y);
    }
    cout<<min_x<<endl;
    
    return 0;
}