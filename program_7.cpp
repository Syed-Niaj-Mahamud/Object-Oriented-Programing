//Write a C++ Program to define a class batsman with the following speci-
//fications:
//Private members:
//batsman code: 4 digits code number
//batsman name: 20 characters(string)
//total innings, notout innings, toal runs: integer type
//calcavg(): Function to compute batavg
//batting avg: [total runs/(total innings-notout innings)] (formula to calcu-
//late batting average)
//Public members:
//readdata(): Function to accept value from batsman code, batsman name, to-
//tal innings, notout innings, total runs and invoke the function calcavg().
//displaydata(): Function to display the data members on the screen.
//Access all the data members and member functions to calculate batting aver-
//age of a batsman by creating its object.


#include<iostream>
#include<string>
using namespace std;

class Batsman
{
private:

    int code,total_innings,notout_innings,total_run;
    string name;

   double calavg()
    {
        return {(total_run)/(total_innings-notout_innings)};
    }
public:
    void input_data()
    {
        cout<<"Enter code:"<<endl;
        cin>>code;
        cout<<"Enter batsman name:"<<endl;
        cin>>name;
        cout<<"Enter total innings:"<<endl;
        cin>>total_innings;
        cout<<"Enter notout innings:"<<endl;
        cin>>notout_innings;
        cout<<"Enter total run:"<<endl;
        cin>>total_run;

    }
    void display_data()
    {
        cout<<"Displaying batsman information"<<endl;
        cout<<"Batsman code:"<<code<<endl;
         cout<<"Batsman Name"<<name<<endl;
          cout<<"Batsman total innings:"<<total_innings<<endl;
          cout<<"Batsman notout innings:"<<notout_innings<<endl;
          cout<<"Batsman total run:"<<total_run<<endl;
    }
    double calculation()
    {
      double avg = calavg();
      return avg;
    }


};

int main()
{
    Batsman b1;
    b1.input_data();
    b1.display_data();

    cout<<"Betting average:"<< b1.calculation()<<endl;;



}

