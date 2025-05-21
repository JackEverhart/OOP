#include <iostream>

int main(){
    int a = 100;

    // Print the address of variable a
    std::cout << &a << std::endl;

    // Create a variable which stores a memory address (pointer variable)
    // <data_type> *pointer_name
    int *a_ptr = &a;

    std::cout << a_ptr << std::endl; // prints the value of the pointer variable of a

    // Access the data through the pointer
    // * - dereferencing operator
    std::cout << *a_ptr << std::endl; // indirect access / indirection

    // Modify the data through the pointer
    *a_ptr = 999;
    std::cout << a << std::endl; // direct access

    return 0;
}