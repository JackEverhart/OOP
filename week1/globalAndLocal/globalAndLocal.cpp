#include <iostream>

int x = 10; // global variable (file scope)

// Declaring and initializing the foo function
void foo(){
        std::cout << x << std::endl;
    }

// Static variables
int staticVariable(int n){
    static int result = 1;
    result += n;
    return result;
}

int main(){
    std::cout << x << " is printed because it is global" << std::endl; // prints the global variable x

    // The more specific the scope the higher precedence it has
    int x = 100; // local variable (block scope)
    std::cout << x << " is printed because it is redefined in the local scope" << std::endl; // prints the local value within the scope

    // Local variables within loops
    std::cout << "The local value of x within each iteration of the loop is printed above" << std::endl;
    for(int x = 0; x < 10; x++){
        std::cout << x << std::endl; // the incremented local value within the loop is printed
    }

    // Local variables within a function
    std::cout << "The returned value of the foo function" << std::endl;
    foo();

    //Static variables
    std::cout << "The printed result of the static function within a for loop" << std::endl;
    for(int i = 0; i < 10; i++){
        std::cout << staticVariable(i) << std::endl;
    }

    return 0;
}