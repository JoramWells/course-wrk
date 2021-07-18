#include <iostream>
#include <string.h>
using namespace std;
string msg;

void check_password(string &password)
{
    // cin >> password;
    // getline(cin,password);
    // if(strlen(password) < 5){
    //     // exit(0);
    //    cout << "huhe";
    // }else{
    //    cout << "huh";
    // }
    int n = password.length();

    bool hasLower = false, hasUpper = false, hasDigit = false, specialChar = false;
    for (int i = 0; i < n; i++)
    {
        if (islower(msg[i]))
            hasLower = true;
        if (isupper(msg[i]))
            hasUpper = true;
        if (isdigit(msg[i]))
            hasDigit = true;
    }
    if (hasLower && hasUpper && hasDigit)
        cout << "strong" << endl;
    else if (hasUpper && hasLower)
        cout << "moderate" << endl;
    else if (hasUpper && hasDigit)
        cout << "moderate" << endl;
    else if (hasDigit && hasLower)
        cout << "moderate" << endl;
    else
        cout << "weak" << endl;
}

int main()
{
    cout << "Enter password" << endl;
    // getline(cin,msg);
    // if(strlen(msg << 5)){
    //     cout << "Invalid input";
    //     exit(0);
    // }
    cin >> msg;
    do
    {
        cout << "Password must be atleast 8 characters" << endl;
        cin >> msg;
    } while (msg.length() < 5);

    // cout << strlen(msg);
    check_password(msg);
    return 0;
}