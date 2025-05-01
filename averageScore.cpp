#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;

int main(){
    system("cls");
    float t1 = 0.0, t2 = 0.0, t3 = 0.0, average = 0.0;

    cout << "Enter your three test score: ";
    cin >> t1 >> t2 >> t3;

    average = (t1 + t2 + t3)/3;
    cout << std::fixed << std::setprecision(2)<< endl;
    cout << "Your average score is: " << average << endl;

    if(average >= 90){
        cout << "Yout grade is A";
    }

    else if(average >= 80 && average < 90){
        cout << "Your grade is B";
    }

    else if(average >= 70 && average < 80){
        cout << "Your grade is c";
    }

    else if(average >= 60 && average < 70){
        cout << "Your grade is d";
    }

    else if(average > 50){
        cout << "Your grade is e";
    }

    else{
        cout << "You failed in the test";
    }
    return 0;
}