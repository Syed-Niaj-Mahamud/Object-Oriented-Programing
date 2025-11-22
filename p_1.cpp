#include<bits/stdc++.h>
using namespace std;

class Employee
{
private:
    double basic,yfe,ma,ha,b;

public:
    void inputdata()
    {
        cout<<"Basic Pay: "<<endl;
        cin>>basic;
        cout<<"Year of Experience: "<<endl;
        cin>>yfe;
        cout<<"Medical Allowance Per Month: "<<endl;
        cin>>ma;
        cout<<"House Allowance Per month: "<<endl;
        cin>>ha;
        cout<<"Bonus Per Year: "<<endl;
        cin>>b;

    }

     calresult()
    {
        double gp;
        gp = 12* (basic+ma+ha)+b;
        cout<<"Gross Pay: "<<gp<<endl;






        double tax=0;

        if(gp>500000)
        {
            tax = (gp*0.01);
            cout<<"Tax amount: "<<endl;
        }

        cout<<"Tax amount:"<<tax<<endl;

    }
};

int main()
{
    Employee e1;
    e1.inputdata();
    e1.calresult();

}
