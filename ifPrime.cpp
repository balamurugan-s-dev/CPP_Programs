#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

int main(){
    int num = 0;

    cout << "Enter the number to check if prime or not: ";
    cin >> num;

    bool flag = false;
    if(num <= 1){
        flag = true;
    }
    else{
        for(int i = 2; i <= sqrt(num); i++){
            if(num % i == 0){
                flag = true;
                break;
            }
        }
    }

    if(flag){
        cout << num << " is not a prime number." << endl;
    }
    else{
        cout << num << " is a prime number." << endl;
    }
    return 0;
}
