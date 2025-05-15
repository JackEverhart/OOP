#include <iostream>
#include <string>

int main(){
    // Create a string
    std::string s1;
    s1 = "Hello!";

    std::cout << s1 + "\n";

    // Initializing a string with another string
    std::string s2(s1);
    std::cout << s2 << std::endl;

    // Initialization with a certain number of characters
    std::string s3(100, '#');
    std::cout << s3 << std::endl;

    // Adding strings
    s1 += s2;
    std::cout << s1 << std::endl;

    // Initialization with a part of the string
    std::string s4(s1, 4, 5); // start with index 4 and take 5 characters
    std::cout << s4 << std::endl;

    return 0;
}