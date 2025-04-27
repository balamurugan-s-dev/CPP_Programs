#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    int num = 0;

    cout << "Enter the number n for prime number: ";
    cin >> num;

    if(num <= 1){
        cout << "Zero and one is not a prime number. ";
    }
    else{
        for(int i = 2; i <= num; i++){

            bool isprime = true;
            for(int j = 2; j * j <= i; j++){
                if(i % j == 0){
                    isprime = false;
                    break;
                }
            }

            if(isprime){
                cout << i << ", ";
            }
        }
    }
    return 0;
}