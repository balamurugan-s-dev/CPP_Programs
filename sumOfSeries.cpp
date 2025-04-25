#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    int num, sum = 0;
    cout<<"Enter the number of series n: ";
    cin >> num;

    for(int i = 1; i <= num; i++){
        sum += i*i;
    }

    cout << "The sum of series " << num << " is: " << sum << endl;
    return 0;
}