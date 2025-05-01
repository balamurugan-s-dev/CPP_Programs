#include <iostream>


using std::cout;
using std::cin;
using std::endl;

int main(){
    system("cls");
    int noOfseries = 0;
    int multiple = 0;
    cout << "Please enter table details" << endl;

    cout << "Enter numper of series: ";
    cin >> noOfseries;

    cout << "What multiplication table: ";
    cin >> multiple;

    cout << "\nMultiplication table" << endl;

    for(int i = 1; i <= noOfseries; i++){
        cout << i << " * " << multiple << " = " << i*multiple << endl;
    }
    return 0;
}