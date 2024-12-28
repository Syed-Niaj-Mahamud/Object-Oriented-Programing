#include<iostream>
using namespace std;

class student
{
private:
    string name,grade;
    int roll,age;

public:
    void setname(string n)
    {
        name = n;
    }
    void setage(int x)
    {
        age = x;
    }
    void setroll(int y)
    {
        roll = y;
    }
    void setgrade(string m)
    {
      grade = m;
    }
    void output()
    {
        cout<<name<<endl<<age<<endl<<roll<<endl<<grade<<endl;
    }

};

int main()
{
    student s1;
    s1.setname("Niaj");
    s1.setage(22);
    s1.setroll(11);
    s1.setgrade("B+");

    student s2;
    s2.setname("Anzeer");
    s2.setage(22);
    s2.setroll(143);
    s2.setgrade("A");

    s1.output();
    s2.output();
}
