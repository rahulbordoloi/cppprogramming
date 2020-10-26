// Link - https://leetcode.com/problems/majority-element/

/*
169. Majority Element

Given an array of size n, find the majority element. The majority element is the element that appears more than ⌊ n/2 ⌋ times.

You may assume that the array is non-empty and the majority element always exist in the array.

Example 1:

Input: [3,2,3]
Output: 3
Example 2:

Input: [2,2,1,1,1,2,2]
Output: 2
*/

#include <bits/stdc++.h>

#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define f(i,a,b) for(auto i=a;i<b;i++)
#define fi(i,a,b,x) for(auto i=a;i<b;i=i+x)
#define fe(i,a,b) for(auto i=a;i<=b;i++)
#define fr(i,a,b) for(auto i=a;i>=b;i--)
#define loop(i, a) for(auto i=a.begin();i!=a.end();i++)
#define endl '\n'
#define sp '\t'
#define ll long long int
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define mod 1000000007
#define PI 3.1415926535897932384626
#define deb(x) cout<<#x<<"="<<x<<endl
#define deb2(x, y) cout<<#x<<" = "<<x<<","<<#y<<" = "<<y<<endl

using namespace std;

template <typename T>
void print(vector<T>& a, char sep)
{
    for(auto i : a) { cout<<i<<sep; }
}

ll mod_opr(ll num)
{
    return (num + mod) % mod;
}

template <typename T>
bool compare(T x, T y)
{
    return x > y ? true : false;
}

bool pair_Compare(const pair<int, int>&a, const pair<int, int>&b)
{
   return a.second < b.second;
}

// Solution Class
class Solution{
    public:
        int majorityElement(vector<int>& nums){

            map<int, int> freq;
            for(auto i : nums){
                freq[i]++;
            }

            int max = INT_MIN;
            for(auto i : freq){
                if(i.ss > max)  max = i.ss;
            }
            return max_element(freq.begin(), freq.end(), pair_Compare)->ff;

        }
};



int main()
{

    // ONLINE_JUDGE
    #ifndef rahulbordoloi
        freopen("input.txt", "r", stdin);
        // freopen("output.txt", "w", stdin);
    #endif

    // Code
    fast;
    int tc;
    cin>>tc;
    while(tc--){

        int n;
        cin>>n;
        vector<int> array(n);                     
        for(auto& i : array){
            cin>>i;
        }
        cout<<Solution().majorityElement(array)<<endl;
    }

    cerr<<"TIME : "<<(float)clock()<<" ms"<<endl;
    return 0;

}