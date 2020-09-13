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

int main()
{

    int n, q, i;
    cin>>n>>q;
    string temp;
    vector<string> hrml;
    vector<string> quer;
    cin.ignore();
    f(i, 0, n)
    {
        getline(cin, temp);
        hrml.push_back(temp);
    }
    f(i, 0, q)
    {
        getline(cin, temp);
        quer.push_back(temp);
    }
    map<string, string> m;
    vector<string> tag;
    f(i, 0, n)
    {
        temp = hrml[i];
        temp.erase(remove(temp.begin(), temp.end(), '\"' ), temp.end());
        temp.erase(remove(temp.begin(), temp.end(), '>' ), temp.end());
        if(temp.substr(0,2) == "</")
        {
            tag.pop_back();
        }
        else
        {
            stringstream ss;
            ss.str("");
            ss<<temp;
            string t1, p1, v1;
            char ch;
            ss>>ch>>t1>>p1>>ch>>v1;
            string temp1 = "";
            if(tag.size() > 0)
            {
                temp1 = *tag.rbegin();
                temp1 = temp1 + "." + t1;
            }
            else
                temp1 = t1;
                tag.push_back(temp1);
                m[*tag.rbegin() + "~" + p1] = v1;
            while(ss)
            {
                ss>>p1>>ch>>v1;
                m[*tag.rbegin()+"~" + p1] = v1;
            }
        }
    }
    f(i, 0, q)
    {
        if (m.find(quer[i]) == m.end())
            cout<<"Not Found!\n";
        else
            cout<<m[quer[i]]<<endl;
    }
    
    return 0;

}