// REFERENCE VARIABLES
#include <iostream>

int main(){
    int count = 1;
    int& r = count; // reference varaible. Should initialize a reference variable

    std::cout <<  "r is " << r << std:: endl;
    std::cout <<  "count is " << count << std:: endl;

    count++; // This also increases the value of r, the reference variable

    std::cout <<  "count is increased by 1" << std:: endl;
    std::cout <<  "r is " << r << std:: endl;
    std::cout <<  "count is " << count << std:: endl;

    r = 10; // This also sets count equal to 10

    std::cout <<  "r is set equal to 10" << std:: endl;
    std::cout <<  "r is " << r << std:: endl;
    std::cout <<  "count is " << count << std:: endl;

    return 0;
}