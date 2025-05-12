#include <iostream>

// Using directive
/*
using namespace std; // declares namespace for entire file
using std::cout // specifies namespace only for cout operator
*/

int main() {

    // Print a welcome message
    std::cout << "Hello World!\n"; // prints the welcome message

    // Mathematical operations
    std::cout << "5 / 2 is " << 5.0 / 2 << std::endl; // prints the mathematical expression and the quotient

    // cout - console output
    // endl - new line, same as \n
    // << - stream insertion operator
    // :: - scope resolution operator
    // std - standard namespace

    return 0;
}