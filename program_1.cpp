#include<iostream>
using namespace std;

class student
{
public:

    string name,grade;
    int roll,age;
};

int main()
{
    student s1;

    s1.name="Niaj";
    s1.age=22;
    s1.roll=11;
    s1.grade="B+";

    cout<<s1.name<<endl<<s1.age<<endl<<s1.roll<<endl<<s1.grade<<endl;

     student s2;

    s2.name="Anzeer";
    s2.age=22;
    s2.roll=143;
    s2.grade="A";

    cout<<s2.name<<endl<<s2.age<<endl<<s2.roll<<endl<<s2.grade<<endl;
}
