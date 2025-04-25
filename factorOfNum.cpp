#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::cin;
using std::endl;

int getSum(vector<int> vec){
    int sum = 0;
    for(int i = 0; i <vec.size(); i++){
        sum += vec[i];
    }
    return sum;
}

int showArr(vector<int> vec){
    for(int i = 0; i < vec.size(); i++){
        cout << vec[i] << " ";
    }
}

int main(){

    int num = 0;
    vector<int> arr;
    cout << "Enter the number to factor: ";
    cin >> num;

    for(int i = 1; i <= num; i++){
        if(num % i == int()){
            arr.push_back(i);
        }
    }

    cout << "The factor numbers of " << num << " is: "; showArr(arr);
    cout << "\nAnd the sum of these is: " << getSum(arr) << endl;
    return 0;
}