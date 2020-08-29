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

ll mod_opr(ll num)
{
    return num % mod;
}

int main()
{
     
    stack<int> max;
    stack<int> s;
    max.push(0);
    int n;
    cin>>n;
    while (n--)
    {
        int a;
        cin>>a;
        if(a == 1){
            cin>>a;
            if(a >= max.top()) max.push(a);
            s.push(a);
        }
        else if(a == 2){
            if(s.top() == max.top()) max.pop();
            s.pop();
        } 
        else if(a == 3) cout<<max.top()<<endl;
    }
    return 0;
}