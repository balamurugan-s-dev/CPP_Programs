#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int num;
    long long sum = 0;
    cout << "Enter the number of series n: ";
    cin >> num;

    for(int i=1; i <= num; i++){
        // if(i%2 != 0){
        //     sum += i;
        // }

        sum += (i * 2) - 1;
    }

    cout << "The sum of odd series " << num << " is: " << sum << endl;
    return 0;
}