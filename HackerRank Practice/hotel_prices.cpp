/*
In this challenge, the task is to debug the existing code to successfully execute all provided test files.

The given code defines two classes HotelRoom and HotelApartment denoting respectively a standard hotel room and a hotel apartment. An instance of any of these classes has two parameters: bedrooms and bathrooms denoting respectively the number of bedrooms and the number of bathrooms in the room.

The prices of a standard hotel room and hotel apartment are given as:

Hotel Room:  + .
Hotel Apartment: The price of a standard room with the same number bedrooms and bathrooms plus .
For example, if a standard room costs , then an apartment with the same number of bedrooms and bathrooms costs .

In hotel's codebase, there is a piece of code reading the list of rooms booked for today and calculates the total profit for the hotel. However, sometimes calculated profits are lower than they should be.

Debug the existing HotelRoom and HotelApartment classes' implementations so that the existing code computing the total profit returns a correct profit.

Your function will be tested against several cases by the locked template code.

Input Format

The input is read by the provided locked code template.
In the first line, there is a single integer  denoting the number of rooms booked for today.
After that  lines follow. Each of these lines begins with a room_type which is either standard or apartment, and is followed by the number of bedrooms and the number of bathrooms in this room.

Constraints

There is at least  and at most  bedrooms in a room
There is at least  and at most  bathrooms in a room
Output Format

The output is produced by the provided and locked code template. It calculates the total profit by iterating through the vector of all rooms read from the input.

Sample Input 0

2
standard 3 1
apartment 1 1
Sample Output 0

500
Explanation 0

In the sample we have one standard room with  bedrooms and  bathroom, and one apartment with one  bedrooms and  bathroom. The price for the room is . The price for the apartment is . Thus the hotel profit is  as the sum of prices of both rooms.
*/

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

class HotelRoom 
{
    
    int bedrooms_;
    int bathrooms_;
    
    public:

        HotelRoom(int bedrooms, int bathrooms) : bedrooms_(bedrooms), bathrooms_(bathrooms) {}
        
        int get_price() 
        {
            return 50*bedrooms_ + 100*bathrooms_;
        }

};

class HotelApartment : public HotelRoom 
{
    
    public:

        HotelApartment(int bedrooms, int bathrooms) : HotelRoom(bedrooms + 2, bathrooms) {}
        
        int get_price() 
        {
            return HotelRoom::get_price() + 100;
        }

};

int main()
{
    
    int n;
    cin >> n;
    vector<HotelRoom*> rooms;
    for (int i = 0; i < n; ++i) 
    {
        string room_type;
        int bedrooms;
        int bathrooms;
        cin >> room_type >> bedrooms >> bathrooms;
        if (room_type == "standard") 
        {
            rooms.push_back(new HotelRoom(bedrooms, bathrooms));
        } 
        else 
        {
            rooms.push_back(new HotelApartment(bedrooms, bathrooms));
        }
    }

    int total_profit = 0;
    for (auto room : rooms) 
    {
        total_profit += room->get_price();
    }
    cout << total_profit << endl;

    for (auto room : rooms) 
    {
        delete room;
    }
    rooms.clear();

    return 0;

}