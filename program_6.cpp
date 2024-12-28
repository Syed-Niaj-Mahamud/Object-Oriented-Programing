//Write a class having two private variables and one member function which
//will return the area and perimeter of the rectangle

#include<iostream>
using namespace std;

class rectangle
{
private:
    double length,breadth;

public:
    void input_value()
    {
        cout<<"Enter length and breadth of a rectangle:"<<endl;
        cin>>length>>breadth;
    }
    void print_value()
    {
        cout<<"Length:"<<length<<endl<<"Breadth:"<<breadth<<endl;

    }
    double calculationArea()
    {
        return length*breadth;
    }
    double calculationPerimeter()
    {
        return 2*(length+breadth);
    }
};

int main()
{
    rectangle r1;

    r1.input_value();
    r1.print_value();

    cout<<"Area:"<<r1.calculationArea()<<endl;
    cout<<"Perimeter:"<<r1.calculationPerimeter()<<endl;

    return 0;
}
