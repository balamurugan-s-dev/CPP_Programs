#include <iostream>
#include <cmath>
#include <iomanip>
#include <conio.h>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::string;

void addition(int n1, int n2){
    cout << "The addition of two number "<< n1 << " and " << n2 << " is: " << n1 + n2<< endl;
}
void subtraction(int n1, int n2){
    cout << "The subtraction of two number " << n1 << " and " << n2 << " is: " << n1 - n2 << endl;
}
void multiplication(int n1, int n2){
    cout << "The multiplication of two number " << n1 << " and " << n2 << " is: " << n1 * n2 << endl;
}
float division(int n1, int n2){
    float divide = static_cast<float>(n1) / n2;
    return divide;
}


int main(){
    string options[] = {"Addition",  "Subtraction", "Multiplication", "Division"};
    int numOption = 4;
    int selected = 0;


    while(true){
        system("cls");

        for(int i = 0; i < numOption; i++){
            if(i == selected){
                cout << "> " << options[i] << endl;
            }
            else{
                cout << "  " << options[i] << endl;
            }
        }
        
        cout << endl;
        cout << " press esc to exit " << endl;
        int key = getch();

        if(key == 224){ // Arrow keys
            key = getch();
            if(key == 72){ // Up arrow
                selected--;
                if(selected < 0 ) selected = numOption - 1;
            }else if(key == 80){ // Down arrow
                selected++;
                if(selected >= numOption) selected = 0;
            }
        }else if(key == 13){ // Enter key
            system("cls");
            cout << options[selected] << endl;
            int num1, num2;
            switch (selected)
            {
            case 0:
                // int num1, num2;
                cout << "Enter the first number: ";
                cin >> num1;
                cout << "Enter the second number: ";
                cin >> num2;
                addition(num1, num2);
                cout << endl;
                cout << "press tab to menu";
                while(true) {
                    key = getch();
                    if(key == 9) {
                        selected = 0;
                        break;
                    }
                }
                continue;

            case 1:
                // int num1, num2;
                cout << "Enter the first number: ";
                cin >> num1;
                cout << "Enter the second number: ";
                cin >> num2;
                subtraction(num1, num2);
                cout << endl;
                cout << "press tab to menu";
                while(true) {
                    key = getch();
                    if(key == 9) {
                        selected = 0;
                        break;
                    }
                }
                continue;

            case 2:
                // int num1, num2;
                cout << "Enter the first number: ";
                cin >> num1;
                cout << "Enter the second number: ";
                cin >> num2;
                multiplication(num1, num2);
                cout << endl;
                cout << "press tab to menu";
                while(true) {
                    key = getch();
                    if(key == 9) {
                        selected = 0;
                        break;
                    }
                }
                continue;

            case 3:
                // int num1, num2;
                cout << "Enter the first number: ";
                cin >> num1;
                cout << "Enter the second number: ";
                cin >> num2;

                if(num2 == 0){
                    cout << "Zero is not divisible !";
                }else{
                    cout << "The division of two number " << num1 << " and " << num2 << " is: " << division(num1, num2) << endl;
                }
                cout << endl;
                cout << "press tab to menu";
                while(true) {
                    key = getch();
                    if(key == 9) {
                        selected = 0;
                        break;
                    }
                }
                continue;
            
            default:
                break;
            }
        }
        else if(key == 27){
            break;
        }
    }

    return 0;
}