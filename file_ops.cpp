#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

string buffer;
string names[10];
string pwds[10];
string modules[10][5];
int lecturer_count = 0;

string decrypt(string str){
    for(int i=0; i<str.length(); i++){
        str[i]++;
    }
    cout << str;
    return str;
}

void init()
{
    ifstream ifs("pwds.txt");
    while (getline(ifs, buffer))
    {
        stringstream ss(buffer);
        ss >> names[lecturer_count];
        // cout << names[lecturer_count];
        ss >> pwds[lecturer_count];
        // cout << pwds[lecturer_count];
        ss >> modules[lecturer_count][10];
        // cout << modules[lecturer_count][10];
        int mods = 1;
        do
        {
            if (ss.eof())
            {
                modules[lecturer_count][mods++] = "0";
            }
            else
            {
                ss >> modules[lecturer_count][mods++];
            }
        } while (mods < 5);
        pwds[lecturer_count] = decrypt(pwds[lecturer_count]);
        // lecturer_count++;
    }
    ifs.close();
}

int main()
{
    // ofstream MyFile("wtf.txt");
    // MyFile << "wtf";
    // MyFile.close();
    decrypt("bgdqqx");
    init();
    return 0;
}