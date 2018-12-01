#include <iostream>
int main(int argc, char** argv){
    //if there are arguments, write the,
    if(argc > 1){
        int i; // declare i outside the for because we need it after the loop finishes
        for (i = 1; i < argc-1; ++i)
            std::cout << argv[i] << " ";
        std::cout << argv[i] << std::endl;
    }
    return 0;
}