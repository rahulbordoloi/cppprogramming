#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define endl "\n"
using namespace std;

class Person{

    protected:
                int age;
                string name;
    public:
                virtual void getdata() {};
                virtual void putdata() {};
};

class Professor : public Person{

    int publications;
    static int cur_id;
    public:     
            void getdata() {
                cin>>name>>age>>publications;
            };
            void putdata() {
                cout<<name<<" "<<age<<" "<<publications<<" "<<cur_id<<endl;
                cur_id++;
            }
};

int Professor::cur_id = 1;

class Student : public Person{

    static int cur_id;
    int marks[6];
    public:     
            int sum_marks = 0;
            void getdata() {
                cin>>name>>age;
                for(auto& i : marks){
                    cin>>i;
                    sum_marks += i;
                }
                
            };
            void putdata() {
                cout<<name<<" "<<age<<" "<<sum_marks<<" "<<cur_id<<endl;
                cur_id++;
            }
};

int Student::cur_id = 1;

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
