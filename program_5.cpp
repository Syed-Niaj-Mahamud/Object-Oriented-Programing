#include<iostream>
using namespace std;

class Box
{
private:
    double length,breadth,height;

public:
    void inputdata(int len,int brth,int hgt)
    {
        length = len;
        breadth = brth;
        height = hgt;
    }

    double calculationArea()
    {
        return length*breadth;
    }
    double calculationVolume()
    {
        return length*breadth*height;
    }
};

int main()
{
    Box b1;

    b1.inputdata(2,2,2);
    double A1 = b1.calculationArea();
    double v1 = b1.calculationVolume();

    cout<<"Area:"<<A1<<endl<<"Volume:"<<v1<<endl;

    return 0;
}
