#include <iostream>
#include <string>

using namespace std;

int main(){

    string sentense;
    int word_count = 0;
    bool in_word = false;

    cout << "Enter the sentense to check number of words in it. " << endl;
    cout << "\t";
    getline(cin, sentense);

    for(char i : sentense){
        if(isspace(i)){
            in_word = false;
        }
        else if(!in_word){
            in_word = true;
            word_count++;
        }
    }

    cout << "The total words in the sentense is: " << word_count << endl;
    return 0;
}