// Link - https://www.hackerrank.com/challenges/alternating-characters/problem?h_l=interview&playlist_slugs%5B%5D%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D%5B%5D=strings&isFullScreen=true

#include <bits/stdc++.h>

#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define f(i,a,b) for(i=a;i<b;i++)
#define fi(i,a,b,x) for(i=a;i<b;i=i+x)
#define fe(i,a,b) for(i=a;i<=b;i++)
#define fr(i,a,b) for(i=a;i>=b;i--)
#define endl '\n'
#define sp '\t'
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

ll alternatingCharacters(string s) 
{

    string answer(*s.begin(), 1);
    ll count = 0; 
    for(auto i : s){
        if(*(answer.end()-1) != i){
            answer += i;
        }
        else{
            count++;
        }
    }

    return count;

}

int main()
{

    ll tc;
    cin>>tc;
    while(tc--){

        string s;
        cin>>s;
        cout<<alternatingCharacters(s)<<endl;
    }

   return 0;

}