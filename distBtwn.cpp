#include <iostream>
#include <cmath> // cmath for mathematical calculation
#include <iomanip> // iomanip is for set precision after decimal number

using std::cout;
using std::cin;
using std::endl;

int main(){
    int x1, y1, x2, y2;

    cout << "Enter x1 and y1 coordinate's"<< endl;
    cout << "x1: ";
    cin >> x1;

    cout << "y1: ";
    cin >> y1;

    cout << "Enter x2 and y2 coordinate's"<< endl;
    cout << "x2: ";
    cin >> x2;

    cout << "y2: ";
    cin >> y2;

    double D = sqrt(((x2 - x1)* (x2 - x1))+ ((y2 - y1)* (y2 - y1)));

    cout << "Calculating the distance between two points (" << x1 << ", "<< y1 << ") ("<< x2 << ", "<< y2 << "): "<< D ;

    return 0;
}