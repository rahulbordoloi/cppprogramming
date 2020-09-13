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

    ll n, q;
    cin>>n;
    vector<ll> arr(n);
    for(ll& i : arr) { cin>>i; }
    cin>>q;
    
    while(q--)
    {

        ll x;
        cin>>x;
        vector<long long>::iterator low, up;
        if(binary_search(arr.begin(), arr.end(), x)){
            low = lower_bound(arr.begin(), arr.end(), x);
            cout<<"Yes "<<(low - arr.begin() + 1)<<endl;
        }
        else
        {
            up = upper_bound(arr.begin(), arr.end(), x);
            cout<<"No "<<(up - arr.begin() + 1)<<endl;
        }
    
    }

    return 0;
}