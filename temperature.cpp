#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;

void fahrenheit(double c) {
    // Convert Celsius to Fahrenheit
    double f = (c * (9.0 / 5.0)) + 32;
    cout << std::fixed << std::setprecision(2);
    cout << "The Fahrenheit is: " << f << endl;
}

void celsius(double f) {
    // Convert Fahrenheit to Celsius
    double c = (f - 32) * (5.0 / 9.0);
    cout << std::fixed << std::setprecision(2);
    cout << "The Celsius is: " << c << endl;
}

int main(){
    double F = 0.0, C = 0.0;
    int choose =0;
    bool flag = true;
    char temp = 'N';
    do{
        cout << "[1] fahrenheit to celsius\n";
        cout << "[2] celsius to fahrenheit\n";
        cout << "[3] exit";

        cout << endl;
        cout << "Enter your choise: ";
        cin >> choose;

        switch(choose){
            case 1:
                cout << "Enter fahrenheit: ";
                cin >> F;
                celsius(F);

                cout << endl;
                cout << "Want to exit or not (Y / N): ";
                cin >> temp;
                if(temp == 'Y'){
                    flag = false;
                }
                break;
    
            case 2:
                cout << "Enter celsius: ";
                cin >> C;
                fahrenheit(C);
                
                cout << endl;
                cout << "Want to exit or not (Y / N): ";
                cin >> temp;
                if(temp == 'Y'){
                    flag = false;
                }
                break;
            
            default:
                cout << "Tankyou for using temperature calculator. ";
                break;
        }

    }while(choose != 3 and flag);

    
    return 0;
}