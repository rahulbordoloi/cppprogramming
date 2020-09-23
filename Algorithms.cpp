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

int main()
{
    fast;

    // Sum of a Vector

    /*
    vector<ll> x {1,2,3,4,5};
    cout<<accumulate(x.begin(), x.end(), 0);    // 0 -> Initial Value of Sum
    */

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

    // Multiplying a Scaler to the Whole Vector [Using Lambda Function]

    /*
    vector<ll> array {1, 2, 3, 4, 5};
    ll constant{300};
    transform(array.begin(), array.end(), array.begin(), [&constant](auto& c) {return c * constant;} );
    print(array, sp);
    */

    // Left Rotation of a Vector
    
    /*
    vector<ll> vect {1,2,3,4,5};
    int leftRotation = 2;
    rotate(vect.begin(), vect.begin() + leftRotation, vect.end());
    print(vect, sp);
    */

    // Right Rotation of a Vector

    /*   
    vector<ll> vect {1,2,3,4,5};
    int rightRotation = 2;
    rotate(vect.begin(), vect.begin() + vect.size() - rightRotation, vect.end());
    print(vect, sp);
    */

    // Slicing a Vector -> https://www.geeksforgeeks.org/slicing-a-vector-in-c/?ref=leftbar-rightbar
    /*
    vector<int> vect {1,2,3,4,5,6,7};
    int x  = 2, y = 5;
    vector<int> answer;
    answer = vect[slice(x, y - x + 1, 1)];
    for(auto i : answer){
        cout<<i<<" ";
    }
    */

    // Erase the Duplicate Occurrences in Sorted Vector
    
    /*
    vector<ll> vect {9,10,3,1,2,3,4,5,5,5,6,7};
    vect.erase(unique(vect.begin(), vect.end()), vect.end()); 
    print(vect, sp);
    */
    
    return 0;
}