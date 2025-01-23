#include<bits/stdc++.h>
using namespace std;

class teacher
{
private:
    string name,dept;
    double ID,salary;

public:
    teacher()  //non-parameterized constructor
    {
        name = "Nazrul Islam";
        dept = "ETE";
        ID = 2108005;
        salary = 70000;
    }
   void printdata()
    {
        cout<<name<<endl;
        cout<<dept<<endl;
        cout<<ID<<endl;
        cout<<salary<<endl;

    }
};

int main()
{
    teacher t1;
    t1.printdata();
}
