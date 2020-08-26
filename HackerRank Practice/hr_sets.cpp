# include<bits/stdc++.h>
using namespace std;

int main() {
    
    set<int> x;
    int n;
    cin>>n;
    for(int a = 0; a < n; a++)
    {
        int y, val;
        cin>>y>>val;
        if(y == 1)
        {
            x.insert(val);
        }
        else if(y == 2)
        {
            auto i = x.find(val);
            if(i != x.end()){
                x.erase(val);
            }
        }
        else if(y == 3)
        {
            auto i = x.find(val);
            if(i != x.end()){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
    }
    return 0;
}
