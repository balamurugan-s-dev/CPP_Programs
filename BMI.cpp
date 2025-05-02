#include <iostream>

using namespace std;

double calculateBMI(double h,  double w){
    return w /(h * h);
}

int main(){
    double height, weight;

    cout << "Calculating the Body Mass Index (BMI)"<< endl;
    cout << "Enter your height in (m): ";
    cin >> height;

    cout << "Enter your weight in (kg): ";
    cin >> weight;

    cout << "Your Body mass index is: " << calculateBMI(height,  weight) << endl;
    return 0;
}