#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    int num = 0;
    cout << "Enter the upper limit for Fibonacci series: ";
    cin >> num;

    int f0 = 0, f1 = 1;

    cout << f0 << endl;
    while(f1 <= num){
        cout << f1 << endl;
        int temp = f1 + f0;
        f0 = f1;
        f1 = temp;
    }
    return 0;
}