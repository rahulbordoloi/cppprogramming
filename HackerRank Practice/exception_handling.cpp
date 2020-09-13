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

int largest_proper_divisor(int n) 
{
    
    if (n == 0) 
    {
        throw invalid_argument("largest proper divisor is not defined for n=0");
    }
    if (n == 1) 
    {
        throw invalid_argument("largest proper divisor is not defined for n=1");
    }
    for (int i = n/2; i >= 1; --i)  
    {
        if (n % i == 0)  
        {
            return i;
        }
    }
    
    return -1; 

}
void process_input(int n) 
{
    
    try
    {
        int d = largest_proper_divisor(n);
        cout << "result=" << d << endl;
    }
    catch(invalid_argument &e)
    {
        cout << e.what() << endl;
    }
    
    cout << "returning control flow to caller" << endl;

}

int main()
{

    int n;
    cin >> n;
    process_input(n);
    return 0;

}