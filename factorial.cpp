#include <iostream>


using std::cout;
using std::cin;
using std::endl;

// Recursion approach
int factorial(int n){
    if(n == 0){
        return 1;
    }
    else{
        return (factorial(n - 1) * n);
    }
}

// For loop approach
int factorialfor(int n){
    int fact = 1;
    for (int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}

int main(){
    int num = 0;

    cout << "Enter the number for factorial: ";
    cin >> num;

    if (num < 0){
        cout << "Enter positive numbers not negative numbers!";
    }
    else{
        cout << "Factorial for the number " << num << " is: " << factorial(num) << endl;
        cout << "Factorial using for loop: " << factorialfor(num) << endl;
    }
    return 0;
}