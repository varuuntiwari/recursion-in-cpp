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
    cout<<reverse_str(str);
    return 0;
}