#include <iostream>

using namespace std;

int main(){

    int num = 0;

    cout << "Enter a number to check weather it is a odd or even number: ";
    cin >> num;

    if(num % 2 == 0){
        cout << "The number " << num << " is a even number." << endl;
    }
    else{
        cout << "The number " << num << " is a odd number." << endl;
    }

    return 0;
}