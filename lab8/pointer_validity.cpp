#include <iostream>

int* pointer_to_static(){
    static int x;
    return &x;
}

int main(){
    std::cout << pointer_to_static() << std::endl;
}
