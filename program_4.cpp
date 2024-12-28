#include<iostream>
using namespace std;

class Box
{
public:
    double length,breadth,height;

    void input_value()
    {
        cout<<"Enter three side of a box(length,breadth,height):"<<endl;
        cin>>length>>breadth>>height;
    }
    void print_value()
    {
        cout<<"Length:"<<length<<endl;
        cout<<"Breadth:"<<breadth<<endl;
        cout<<"height:"<<height<<endl;
    }
    double volume()
    {
        double v=length*breadth*height;
        return v;
    }
};

int main()
{
    Box b1;

    b1.input_value();
    b1.print_value();
    double v1 = b1.volume();

    cout<<"Volume of this box:"<<v1<<endl;

    return 0;
}
