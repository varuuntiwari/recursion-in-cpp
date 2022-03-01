/*
    Reverses a string by concatenating the first character
    to substring of original string not containing the
    first character until all characters have been added
    to the last.
*/
#include <iostream>
#include <string>
using namespace std;

string reverse_str(string str) {
    if(str == "") {
        return "";
    } else {
        return reverse_str(str.substr(1)) + string(1, str.at(0));
    }
}

int main() {
    string str("std::String");
    cout<<"Enter string to reverse: ";
    std::getline(std::cin, str);
    string rts = reverse_str(str);
    cout<<"The reverse is "<<rts<<endl;
    if(str == rts) {
        cout<<"Input is a palindrome";
    } else {
        cout<<"Input is not a palindrome";
    }
    return 0;
}