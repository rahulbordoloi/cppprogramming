# include <bits/stdc++.h>

#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define f(i,a,b) for(i=a;i<b;i++)
#define fr(i,a,b) for(i=a;i>=b;i--)
#define endl '\n'
#define ll long long int
#define ff first
#define ss second
#define pb(x) push_back(x)
#define mp make_pair
#define mod 1000000007

using namespace std;

int main()
{
    int n,i;
    cin>>n;
    vector<int> v;
    f(i,0,n){
        int y;
        cin>>y;
        v.pb(y);  
    }
    int x;
    cin>>x;
    v.erase(v.begin() + x - 1);
    int y;
    cin>>x>>y;
    v.erase(v.begin() + x - 1, v.begin() + y - 1);
    cout<<v.size()<<endl;
    for(auto i : v){
        cout<<i<<" ";
    }
    return 0;
}