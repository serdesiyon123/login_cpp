#include <iostream>
#include <fstream>
using namespace std;


int main() {

    ofstream writeFile;

    writeFile.open("logininfo.txt", ios::app);

    cout << "1: SignUp\n";
    cout << "2: Login\n";
    cout << "3: ForgotPassword\n";
    cout << "4 :Exit.\n";

    int x;
    cout << "Enter a number: ";
    cin >> x;

    string name, username, email, password;

    string enterName = "Enter your name: ";
    string enterEmail = "Enter your email: ";
    string enterUserName = "Enter user name: ";
    string enterPassword = "Enter your password: ";
    string idenName = "Name: ";
    string idenUser = "Username: ";
    string idenPass = "Password: ";
    string idenEmail = "E-mail: ";


    if (x == 1) {
        cout << enterName ;
        cin >> name;
        cout << enterEmail;
        cin >> email;
        cout << enterUserName;
        cin >> username;
        cout << enterPassword;
        cin >> password;

        writeFile << '\n' << idenName << name << "\n";
        writeFile << idenUser << username << "\n";
        writeFile << idenPass << password << "\n";
        writeFile << idenEmail << email << "\n";

        cout << "You just created an account";
        } else if (x == 2) {



        cout << enterUserName;
        cin >> username;
        cout << enterPassword;
        cin >> password;

        ifstream readFile;
        readFile.open("logininfo.txt");
        string searchUser = idenUser + username;
        string searchPass = idenPass + password;
        string line;



        while (getline(readFile, line)) {

            if((line.find(searchUser) == string::npos) ){
                cout << "got the username\n";

            }
            if((line.find(searchPass) == string::npos)){
                cout << "got the password";
                break;

            }

            else{
                cout << "just create acc";
                break;
            }


        }
        readFile.close();
        } else if (x == 3) {
            cout << enterEmail;
            cin >> email;

        } else if (x == 4) {

            cout << "Thank you for your time";
            return 0;
        } else {
            cout << "Entered wrong number.";
        }


        writeFile.close();
        return 0;
    }
