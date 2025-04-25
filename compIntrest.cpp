#include <iostream>
#include <cmath> // cmath for mathematical calculation
#include <iomanip> // iomanip is for set precision after decimal number

using std::cout;
using std::cin;
using std::endl;

int main(){
    long P = 0; // Principal amount
    int n = 4; // Change n to adjust the interest add time (month)
    int t = 0; // Time from the amount is invested
    double r = 0.0, A = 0; // Rate of interest and Annual amount 

    cout << "Enter Principal amount: ";
    cin >> P;

    cout << "Enter Annual Intrest rate in %: ";
    cin >> r;

    cout << "Time the money Invested (in Years): ";
    cin >> t;

    // Compound Intrest formula   A = P * (1 + r/n)^ (n*t)
    A =P * pow((1 +((r/100) /n)), n*t);

    cout << std::fixed << std::setprecision(2);
    cout << "The Annual Amount is: " << A << endl;

    cout << "Interest earned: " << (A - P) << endl;
    return 0;
}