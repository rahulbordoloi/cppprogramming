# include <bits/stdc++.h>

#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define f(i,a,b) for(i=a;i<b;i++)
#define fr(i,a,b) for(i=a;i>=b;i--)
#define endl '\n'
#define ll long long int
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define mod 1000000007

using namespace std;

main()
{
    int year;
    cin>>year;
    if(year == 1918)   cout<<"26.09.1918";
    else if(year == 1700 || year == 1800 || year == 1900)
        cout<<"12.09."<<year;
    else if(year % 400 == 0)
        cout<<"12.09."<<year;
    else if(year % 4 == 0)
    {
        if(year % 100 == 0)    cout<<"13.09."<<year;
        else cout<<"12.09."<<year;
    }
    else cout<<"13.09."<<year;
}