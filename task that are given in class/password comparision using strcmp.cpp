#include <iostream>
#include <string> 

using namespace std;

int main() {
    
    string inbuilt_password = "muzu@123";
    string username_inbuilt = "muzu";
    // userinput wale variables
    string input_pass;
    string username_input;

    
    while (true) {
        cout << "\n--- Login Portal ---" << endl;
        cout << "Enter your username: ";
        cin >> username_input;

        cout << "Enter your password: ";
        cin >> input_pass;

        
        if (username_input == username_inbuilt && input_pass == inbuilt_password) {
            cout << "\nSuccess! All details are correct. You logged in successfully." << endl;
            break; 
        } 
        else {
           
            cout << "\nInvalid credentials! Please try again." << endl;
            
            if (username_input != username_inbuilt) {
                cout << "[Hint: Incorrect Username]" << endl;
            } else {
                cout << "[Hint: Incorrect Password]" << endl;
            }
        }
    }

    return 0;
}
