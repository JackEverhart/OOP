#include <iostream>
#include <vector>

void print(const std::vector<int> v); 

void rotateLeft(std::vector<int>& v, int k);

int main(){
    std::vector<int> v {1, 2, 3, 4, 5, 6};

    v.push_back(7); // adds 7 at the end of the vector

    std::cout << v.size() << std::endl; // prints out size of the vector

    print(v); // prints out vector v
    
    rotateLeft(v, 2); // rotates vector v to the right twice

    print(v); // prints out vector v

    return 0;
}

void print(const std::vector<int> v){
    for(int i : v){ //range-based for loop
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

void rotateLeft(std::vector<int>& v, int k) {
    k %= v.size();
    while(k > 0) {
        int first = v.front(); // returns the first element of a vector
        v.push_back(first); // adds to the end of the vector
        v.erase(v.begin()); // deletes the first element of the vector
        k--;
    }
}