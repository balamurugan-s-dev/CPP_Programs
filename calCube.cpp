#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    int num;

    bool flag = true;
    cout << "Enter value between 1 to 2090000" << endl;
    while(flag){
        cout << "Enter the cube series: ";
        cin >> num;
        if(num < 0){
            cout << "Please enter positive number !" << endl;
            flag = true;
        }else{
            flag = false;
        }
    }
    
    for(int i = 1; i <= num; i++){
        long long sum = 1ll*i*i*i;
        cout << "The cube of " << i << " is " << sum << endl;
    }
    return 0;
}