#include <iostream>
#include <iomanip>
#include <string>
#include <conio.h>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void celsius(double f) {
    // Convert Fahrenheit to Celsius
    double c = (f - 32) * (5.0 / 9.0);
    cout << std::fixed << std::setprecision(2);
    cout << "The Celsius is: " << c << endl;
}

void fahrenheit(double c) {
    // Convert Celsius to Fahrenheit
    double f = (c * (9.0 / 5.0)) + 32;
    cout << std::fixed << std::setprecision(2);
    cout << "The Fahrenheit is: " << f << endl;
}

int main(){
    double F = 0.0, C = 0.0;
    string options[] = {"Farenheit", "Celsius", "Exit"};
    int numOptions = 3;
    int selected = 0;

    while(true){
        system("cls"); // Clear screen

        for(int i = 0; i < numOptions; i++){
            if(i == selected){
                cout << "> " << options[i] << endl; // Highlighted option
            }else{
                cout << "  " << options[i] << endl;
            }
        }

        int key = getch();

        if(key == 224){ // Arrow keys
            key = getch();
            if(key == 72){ // Up arrow
                selected--;
                if(selected < 0 ) selected = numOptions - 1;
            }else if(key == 80){ // Down arrow
                selected++;
                if(selected >= numOptions) selected = 0;
            }
        }else if(key == 13){ // Enter key
            system("cls");
            cout << options[selected] << endl;
            switch(selected){
                case 0:
                    cout << "Enter fahrenheit: ";
                    cin >> F;
                    celsius(F);
                    cout << endl;
                    cout << "press esc to menu";
                    while(true) {
                        key = getch();
                        if(key == 27) {
                            selected = 0;
                            break;
                        }
                    }
                    continue;

                case 1:
                    cout << "Enter celsius: ";
                    cin >> C;
                    fahrenheit(C);
                    cout << endl;
                    cout << "press esc to menu";
                    while(true) {
                        key = getch();
                        if(key == 27) {
                            selected = 0;
                            break;
                        }
                    }
                    continue;
                    
                case 2:
                    return 0;
            };
        }
    }    
    return 0;
}