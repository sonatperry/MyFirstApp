// Author: Sona Perry

#include <iostream>
using namespace std;

int main()
{
    //Declaring variables
    double PayRate = 14.50;
    double HoursWorked = 40;
    double Payment;
    cout << "Payroll System" << endl;
    cout << "===============\n\n";
    cout << "Enter your pay rate ==>";
    cin >> PayRate;
    cout << "Enter the hours you worked ==>";
    cin >> HoursWorked;

    Payment = PayRate * HoursWorked;
    cout << "Your Payment is ==>" << Payment << "\n\n\n\n\n\n";
}
