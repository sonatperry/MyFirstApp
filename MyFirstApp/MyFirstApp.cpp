// Author: Sona Perry

#include <iostream>
using namespace std;

double CalcPayment(double, int);

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
    Payment = CalcPayment(PayRate, HoursWorked);
    cout << "Your Payment is ==>" << Payment << "\n\n\n\n\n\n";
}

double CalcPayment(double p, int h)
{
    if (h <= 40)
    {
        return p * h;
    }
    else
    {
        return (40 * p) + ((h - 40) * (p * 1.5));
    }
}
//end