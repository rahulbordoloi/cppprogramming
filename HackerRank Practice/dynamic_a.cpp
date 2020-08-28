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

int main()
{
     
    ll n, q, lastAnswer = 0;
    cin>>n>>q;
    vector< vector<ll> > seqList(n);
    while(q--)
    {
        ll opr,x,y;
        cin>>opr>>x>>y;
        ll seq = (x ^ lastAnswer) % n;
        if(opr == 1)
            seqList[seq].pb(y);
        else if(opr == 2)
        {
            lastAnswer = seqList[seq][y % seqList[seq].size()];
            cout<<lastAnswer<<endl;
        }
    }
        
    return 0;
}