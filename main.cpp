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
    string idenName = "Name:";
    string idenUser = "Username:";
    string idenPass = "Password:";
    string idenEmail = "E-mail:";


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
        string searchUser =static_cast<string>(idenUser + username);
        string searchPass = static_cast<string> (idenPass + password);
        string line;


        while(getline(readFile,line)){

            if(searchUser == line ){
                string line2;
                while(getline(readFile,line2)){
                    if(searchPass == line2){
                        cout << "logged successfully";
                    }

                }

            }

        }







        readFile.close();
        } else if (x == 3) {
            cout << enterEmail;
            cin >> email;
            ifstream readFile;
            readFile.open("logininfo.txt");
            string searchEmail = static_cast<string>(idenEmail + email);
            string line;

            while(getline(readFile,line)){
                if(searchEmail == line){
                    cout << "enter new password";
                }
            }


            readFile.close();
        } else if (x == 4) {

            cout << "Thank you for your time";
            return 0;
        } else {
            cout << "Entered wrong number.";
        }


        writeFile.close();
        return 0;
    }
