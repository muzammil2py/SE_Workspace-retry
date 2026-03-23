#include <iostream>
// no ctime here, just basic iostream

using namespace std;

// making a class because the project requires OOP
class ATM {
  public:
    int pin;
    int current_bal;
    int start_bal;

    // compulsory constructor!!!
    ATM(); 
    
    // function declarations
    void startSystem();
    void theMenu();
};

// using scope resolution operator :: because it's required
ATM::ATM() {
    pin = 12345;
    current_bal = 20000;
    start_bal = 60000;
}

// the main welcome screen thing
void ATM::startSystem() {
    int choice;
    cout << "***********************************\n";
    cout << "* WELCOME TO HAX0R ATM        *\n";
    cout << "***********************************\n";
    // Hardcoding the date since ctime is banned
    cout << "Date/Time: Monday, March 23, 2026 at 11:43 AM IST\n";
    cout << "-----------------------------------\n";
    cout << "1. Enter ATM PIN\n";
    cout << "2. Help\n";
    cout << "Choose: ";
    cin >> choice;

    if (choice == 1) {
        int x;
        cout << "\nEnter PIN (ONE ATTEMPT ONLY!): ";
        cin >> x;
        
        if (x == pin) {
            cout << "\nACCESS GRANTED...\n";
            theMenu(); // go to main menu
        } else {
            cout << "\nWRONG PIN. SYSTEM LOCKDOWN. BYE.\n";
            // program just dies here
        }
    } else if (choice == 2) {
        cout << "\n--- HELP MENU ---\n";
        cout << "Bro, just press 1 and enter 12345.\n";
        cout << "You only get one try or the program closes.\n";
        cout << "Restart the app to try again.\n";
    } else {
        cout << "Bad input. Crashing now...\n";
    }
}

// main menu loop using scope resolution
void ATM::theMenu() {
    int opt = 0;
    
    // loops requirement: using a while loop to keep the menu going
    while (opt != 4) {
        cout << "\n=== MAIN MENU ===\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Check Balance\n";
        cout << "4. Exit\n";
        cout << "Choice: ";
        cin >> opt;

        if (opt == 1) {
            int amt;
            cout << "\n--- DEPOSIT ---\n";
            cout << "Initial Starting balance: Rs. " << start_bal << "\n";
            cout << "Present balance: Rs. " << current_bal << "\n";
            cout << "Enter deposit amount: Rs. ";
            cin >> amt;
            
            if (amt > 0) {
                current_bal = current_bal + amt;
                cout << "Done! New balance: Rs. " << current_bal << "\n";
            }
        } 
        else if (opt == 2) {
            int amt;
            cout << "\n--- WITHDRAW ---\n";
            cout << "Enter withdraw amount: Rs. ";
            cin >> amt;
            
            if (amt > current_bal) {
                cout << "\n***********************************\n";
                cout << "* TRANSACTION FAILED       *\n";
                cout << "***********************************\n";
                cout << "Error: You are too broke.\n";
                cout << "Present Balance is only Rs. " << current_bal << "\n";
                cout << "***********************************\n";
            } else {
                current_bal = current_bal - amt;
                cout << "Take your cash: Rs. " << amt << "\n";
                cout << "Leftover balance: Rs. " << current_bal << "\n";
            }
        }
        else if (opt == 3) {
            cout << "\n--- BALANCE ---\n";
            cout << "Initial Starting balance: Rs. " << start_bal << "\n";
            cout << "Present balance: Rs. " << current_bal << "\n";
        }
        else if (opt == 4) {
            cout << "\nLogging out. See ya.\n";
        }
        else {
            cout << "Invalid. Try again.\n";
        }
    }
}

int main() {
    // make the object
    ATM myAtm;
    
    // run the script
    myAtm.startSystem();
    
    return 0;
}