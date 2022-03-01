/* 
    A program to convert decimal number into binary by
    storing result in an int array provided to the
    recursive function.
*/

#include <iostream>
using namespace std;

// log(number to calculate log2 of)
int log(int n) {
    if(n > 1) return (1 + log(n/2));
    else return 0;
}
// convert(number to convert, array to store result in, size of array left)
int convert(int n, int res[], int s) {
    if(n == 0) {
        return 0;
    } else {
        res[s] = n%2;
        return convert(n/2, res, (s-1));
    }
}

int main() {
    int n;
    cout<<"Enter decimal number to convert to binary: ";
    try {
        std::cin>>n;
    } catch(const std::exception& e) {
        std::cerr<<e.what();
    }
    int size = log(n);
    int bin[size];
    convert(n, bin, size);
    for(int i=0;i<=size;i++) {
        cout<<bin[i];
    }
}