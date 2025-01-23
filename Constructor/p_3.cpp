#include<bits/stdc++.h>
using namespace std;

class triangle
{
private:
    double length,breadth,height;

public:


    void inputdata()
    {

        cin>>length;
        cin>>breadth;
        cin>>height;


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
    triangle t1;
    t1.inputdata();
    t1.calcareaperimeter();

}
