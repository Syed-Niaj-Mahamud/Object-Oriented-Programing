#include<bits/stdc++.h>
using namespace std;

class triangle
{
private:
    double length,breadth,height;

public:
    triangle(double len,double bread, double hei)
    {
        length = len;
        breadth = bread;
        height = hei;
    }
    void calcareaperimeter()
    {
        double area,perimeter;
        area = 0.5*length*height;
        perimeter = length+breadth+height;

        cout<<"Area of triangle is: "<<area<<endl;
        cout<<"Perimeter of triangle is: "<<perimeter<<endl;
    }
};

int main()
{
    triangle t1(10,8,5);
    t1.calcareaperimeter();

    triangle t2(20,15,12);
    t2.calcareaperimeter();

}
