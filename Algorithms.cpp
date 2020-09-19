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

int main()
{
    // Code to Remove Spaces in Between
    
    /*
    string s = "R  ah u l Bord     oloi";
    cout<<s<<endl;
    // Method 1
    s.erase(remove_if(s.begin(), s.end(), ::isspace), s.end());
    // Method 2
    s.erase(remove(s.begin(), s.end(), ' '), s.end());
    cout<<s;
    */

   // Append Repeatation of a String by its Frequency
   
   /*
   string s = "R7h9L5";8+ hona 
   string answer;
   fi(i, 0, s.size(), 2){
       answer.insert(answer.end(), (int)(s[i + 1] - '0'), s[i]);
   }
   cout<<z;
   */
   
   return 0;
}
