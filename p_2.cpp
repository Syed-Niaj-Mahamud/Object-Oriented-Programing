#include <iostream>
using namespace std;

class Employee {
private:
    double basicPay;       // Monthly basic salary
    int yearsOfExperience; // Number of years worked
    double medicalAllowance; // Monthly medical allowance
    double houseAllowance;   // Monthly house allowance
    double bonus;            // Annual bonus

public:
    // Method to take employee data as input
    void inputData() {
        cout << "Basic Pay: ";
        cin >> basicPay;
        cout << "Years of Experience: ";
        cin >> yearsOfExperience;
        cout << "Medical Allowance Per Month: ";
        cin >> medicalAllowance;
        cout << "House Allowance Per Month: ";
        cin >> houseAllowance;
        cout << "Bonus Per Year: ";
        cin >> bonus;
    }

    // Method to calculate and display gross pay and tax
    void calculatePayAndTax() {
        // Calculate Gross Pay
        double grossPay = 12 * (basicPay + medicalAllowance + houseAllowance) + bonus;

        // Calculate Tax Amount
        double taxAmount = 0;
        if (grossPay > 500000) {
            taxAmount = grossPay * 0.10; // 10% tax on gross pay
        }

        // Display results
        cout << "Gross Pay: " << grossPay << endl;
        cout << "Tax Amount: " << taxAmount << endl;
    }
};

int main() {
    Employee employee;

    // Input data
    employee.inputData();

    // Calculate and display pay and tax
    employee.calculatePayAndTax();

    return 0;
}
