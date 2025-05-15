#include <iostream>


namespace first{
    void print(){
        std::cout << "first" << std::endl;
    }
}

namespace second{
    void print(){
        std::cout << "second" << std::endl;
    }
}

int main(){

    //this is an error
    //print();

    first::print();

    second::print();

    int salary = 76000;
    int taxes = (salary > 75000)? salary-((salary*0.8)/1.1) : salary-((salary*1.7)/2);
    std::cout << taxes << std::endl;

    return 0;
}