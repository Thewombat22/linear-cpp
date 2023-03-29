// This is a code along with the instructions from main-old.cpp
#include <iostream> // iostream must be used for any input or output in C++ or C


int main(){ // Main() is the entry point of any C++ program , must be define or program will not run.
    std::cout << "Hello World!\n"; // std:cout is the standard output used commonly in C++.
    
    std::cout << 5; // outputs int 5.
    
    (((std::cout << "\nOutput 1\n")<< "Output 2\n")<< "Output 3\n") << "Output 5\n"; // This is an example of chain insertions, multiple outputs with only one std:cout.
    
    std::cout << "this " << "version " << "is " << "most " << "common " << "way.\n"; // Another version of chain insertion just a more common way to do it.
    
    return 0; // Since main is declared as an int we must return an int 0 for the program to run thus we have return 0;
}