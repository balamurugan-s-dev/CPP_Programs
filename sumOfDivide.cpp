#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int sum = 0;
    int num = 0;

    cout << "Enter the number to divide between 100 to 200: ";
    cin >> num;

    for(int i = 100; i <= 200; i++){
        if(i % num != 0){
            continue;
        }
        sum += i;
    }

    cout << "The sum divide by " << num << " is: " << sum;
    return 0;
}