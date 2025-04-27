#include <iostream>
#include <ctime>
#include <cstdlib>

using std::cout;
using std::cin;
using std::endl;

int main(){
    srand(time(0)); // srand() function is used for seed generation if there is no srand means the rand() function always generate same number every time the code run's, here the present time is used for seed generation.
    int min = 0;
    int max = 0;
    int guess = 0;

    cout << "Enter the minimum and maximum number for guess: "<< endl;
    cout << "Minimum: ";
    cin >> min;

    cout << "Maximum: ";
    cin >> max;

    bool flag = true;
    while(flag){
        cout << "Guess the number between " << min << " and " << max << ": ";
        cin >> guess;
        
        // Here the target is set as rand() % (min - max + 1) + min because the rand() funtion generate a number as much as high like 23415 by using % operater we can reduce the number to as we want.
        int target = (rand() % (max - min + 1) + min); 

        while(true){
            if(guess < target){
                cout << "Too Low! Try again: ";
                cin >> guess;
            }
            else if(guess > target){
                cout << "Too High! Try again: ";
                cin >> guess;
            }
            else{
                cout << "Congratulations! You guess the number." << endl;
                break;
            }
        }

        char f = 'Y';
        cout << endl << endl<< endl;
        cout << "Choose between Y and N\n";
        cout << "Want to continue (Y/N): ";
        cin >> f;
        if(f != 'Y'){
            flag = false;
        }
    }

    cout << endl << endl<< endl;
    cout << "Tankyou for playing. ";
    return 0;
}