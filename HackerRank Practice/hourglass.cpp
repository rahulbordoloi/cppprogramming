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
     
    int i, j, sum, max = -9999;
    int arr[6][6];
    
    f(i,0,6)
       f(j,0,6)
           cin>>arr[i][j];
   
    fe(i,0,3)
    {
       fe(j,0,3)
       {
           sum = arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[i+1][j+1] + arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
           if(max < sum)    max = sum; 
       }
    }
    cout<<max;
        
    return 0;
}