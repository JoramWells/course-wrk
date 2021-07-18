#include <bits/stdc++.h>
using namespace std;

int countWords(string str){
    stringstream s(str);
    string word;
    int count = 0;
    while (s >> word){
        count ++;
    }
    return count;
}
int main(){
    string s = "wtf is all i have";
    cout << "Number of words: " << countWords(s);
    return 0;
}