#include<iostream>
using namespace std;

class Box
{
public:
    double height,breadth,length;
};

int main()
{
    Box b1,b2;
    double v = 0.0;

    b1.height = 5.0;
    b1.breadth = 6.0;
    b1.length = 7.0;

    v = b1.height * b1.breadth * b1.length;
    cout<<"Volume of box 1 is"<<" "<<v<<endl;

    b2.height = 10.0;
    b2.breadth = 12.0;
    b2.length = 13;

    v = b2.height * b2.breadth * b2.length;
    cout<<"Volume of box 2 is"<<" "<<v<<endl;

    return 0;
}
