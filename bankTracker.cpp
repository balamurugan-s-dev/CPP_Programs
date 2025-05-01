#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>
#include <conio.h>
#include <vector>
#include <map>
#include <string>
#include <random>

using namespace std;

map<int, string> accountNames;
map<int, string> accountAddresses;
map<int, int> accountPins;
map<int, double> accountBalances;
map<int, long long> accountPhoneNo;

void createAccount(){
    string userName = "", address = "";
    int pin = 0;
    long long phoneNo = 0;

    bool accountCreated = false;

    while(!accountCreated){
        cout << "Welcome to the bank" << endl;
        cout << "Please enter the following details" << endl<< endl;
    
        cout << "Enter your name: ";
        getline(cin >> ws, userName);
    
        cout << "Enter your address: ";
        getline(cin >> ws, address);
    
        cout << "Enter your phone number: ";
        cin >> phoneNo;
    
        cout << "Enter your pin: ";
        cin >> pin;
    
        if(userName == "" || address == "" || phoneNo == 0 || pin == 0){
            cout << "All the details are required" << endl;
            system("pause");
            continue;
        }
    
        int accNo = 0;
        accNo = rand() % 9000 + 1000;
        
    
        if(accountNames.find(accNo) == accountNames.end()){
            accountNames[accNo] = userName;
            accountAddresses[accNo] = address;
            accountPhoneNo[accNo] = phoneNo;
            accountPins[accNo] = pin;
            accountBalances[accNo] = 0;
            accountCreated = true;
    
    
            cout << "\nAccount created successfully" << endl;
            cout << "Your account number is: " << accNo << endl << endl;
            system("pause");
        }
        else{
            cout << "Account already exists" << endl;
            cout << "please enter the details again" << endl;
        }
    }

}

bool login(int& accNo){
    int accNum;
    int pin;

    cout << "Welcome to abc bank" << endl << endl;
    cout << "Enter your account number: ";
    cin >> accNum;

    cout << "Enter your pin: ";
    cin >> pin;

    if(accountNames.find(accNum) != accountNames.end() && accountPins[accNum] == pin){
        accNo = accNum;
        return true;
    }
    else{
        return false;
    }
}

int main(){
    srand(time(0));
    vector<string> option1 = {"Create Account", "Login", "Exit"};
    vector<string> option2 = {"Deposit", "Withdraw","Transfer","Account Details","Balance", "Exit"};
    int select1 = 0;
    int select2 = 0;
    vector<vector<int>> userData;

    while(true){
        system("cls");
        cout << "Welcome to abc bank" << endl<< endl;
        for(int i = 0; i < 3; i++){
            if(i == select1){
                cout << "> " << option1[i] << endl;
            }else{
                cout << "  " << option1[i] << endl;
            }
        }

        int key = getch();

        if(key == 224){
            key = getch();
            if(key == 72){
                select1--;
                if(select1 < 0) select1 = option1.size() - 1;
            }else if(key == 80){
                select1++;
                if(select1 >= option1.size()) select1 = 0;
            }
        }else if(key == 13){
            system("cls");

            if(select1 == 0){
                createAccount();
            }else if(select1 == 1){
                int currentAccNo = 0;
                if(login(currentAccNo)){
                    bool flag = true;
                    while(flag){
                        system("cls");

                        cout << "Welcome " << accountNames[currentAccNo] << endl << endl;
                        for(int i = 0; i < option2.size(); i++){
                            if(i == select2){
                                cout << "> " << option2[i] << endl;
                            }
                            else{
                                cout << "  " << option2[i] << endl;
                            }
                        }

                        key = getch();

                        if(key == 224){
                            key = getch();
                            if(key == 72){
                                select2--;
                                if(select2 < 0) select2 = option2.size() - 1;
                            }else if(key == 80){
                                select2++;
                                if(select2 >= option2.size()) select2 = 0;
                            }
                        }else if(key == 13){
                            system("cls");

                            switch (select2){
                                case 0:
                                    double amount;
                                    cout << "Enter the amount to deposit: ";
                                    cin >> amount;
                                    accountBalances[currentAccNo] += amount;

                                    cout << "Deposit successful..." << endl;
                                    cout << fixed << setprecision(2);
                                    cout << "Balance: " << accountBalances[currentAccNo] << endl;
                                    system("pause");
                                    break;

                                case 1:
                                    double drawAmount;
                                    cout << "Enter the amount to withdraw: ";
                                    cin >> drawAmount;
                                    if(accountBalances[currentAccNo] >= drawAmount){
                                        accountBalances[currentAccNo] -= drawAmount;
                                    }
                                    else{
                                        cout << "Insufficient balance !" << endl;
                                        system("pause");
                                        break;
                                    }
                                    cout << drawAmount << " withdraw successfully..."<< endl;
                                    cout << fixed << setprecision(2);
                                    cout << "Balance: " << accountBalances[currentAccNo] << endl;
                                    system("pause");
                                    break;

                                case 2:
                                    int tfNumber;
                                    double tfAmount;
                                    cout << "Enter the transfer account number: ";
                                    cin >> tfNumber;
                                    if(accountNames.find(tfNumber) != accountNames.end()){
                                        cout << "\nEnter the amount to transfer: ";
                                        cin >> tfAmount;
                                        if(accountBalances[currentAccNo] < tfAmount){
                                            cout << "Insufficient balance !" << endl;
                                            system("pause");
                                            break;
                                        }
                                        else{
                                            accountBalances[currentAccNo] -= tfAmount;
                                            accountBalances[tfNumber] += tfAmount;
                                        }
                                    }
                                    else{
                                        cout << "Account not found !" << endl;
                                        system("pause");
                                        break;
                                    }

                                    cout << tfAmount << " transfer to " << tfNumber << " successfully..."<< endl;
                                    cout << fixed << setprecision(2);
                                    cout << "Balance: " << accountBalances[currentAccNo] << endl;
                                    system("pause");
                                    break;

                                case 3:
                                    cout << "Your Account details" << endl << endl;
                                    cout << "Username: " << accountNames[currentAccNo] << endl;
                                    cout << "Account Number: " << currentAccNo << endl; 
                                    cout << "Address: " << accountAddresses[currentAccNo] << endl;
                                    cout << "Phone number: " << accountPhoneNo[currentAccNo] << endl;
                                    cout << fixed << setprecision(2);
                                    cout << "Balance Amount: " << accountBalances[currentAccNo] << endl;
                                    system("pause");
                                    break;

                                case 4:
                                    cout << "Your account Balance" << endl;
                                    cout << fixed << setprecision(2);
                                    cout << "Balance: " << accountBalances[currentAccNo] << endl;
                                    system("pause");
                                    break;
                                
                                case 5:
                                    system("cls");
                                    flag = false;
                                    break;
                                
                                default:
                                    break;
                            }
                        }
                    }
                }
                else{
                    cout << "Wrong account number or pin" << endl;
                    system("pause");
                }
            }else if(select1 == 2){
                system("cls");
                cout << "Thank you for using our service, Goodbye" << endl;
                system("pause");
                return 0;
            }

        }
    }

}