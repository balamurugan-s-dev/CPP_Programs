#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void fibonacci(int num){
    int f0 = 0, f1 = 1;

    cout << f0 << " ";
    while(f1 <= num){
        cout << f1 << " ";
        int temp = f1 + f0;
        f0 = f1;
        f1 = temp;
    }
}

void fibonaccin(int num){
    int f0 = 0, f1 = 1;
    cout << f0 << " ";
    for(int i = 2; i <= num; i++){
        cout << f1 << " ";
        int temp = f1 + f0;
        f0 = f1;
        f1 = temp;
    }
}

int main(){
    system("cls");
    int num = 0;
    cout << "Enter the upper limit for Fibonacci series: ";
    cin >> num;

    if(num <= 1){
        cout << "The number must be greater than the base number 1." << endl;
    }
    else{
        cout << "Fibonacci series: ";
        fibonacci(num);

        cout << "\nFibonacci series count: ";
        fibonaccin(num);
    }
    return 0;
}