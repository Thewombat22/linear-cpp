// Code along with instructions.cpp
#include <iostream>

int main(){
    int x;
    int y = x;
    

    std::cout << "Hello, enter a number ";
    std::cin >> x; // Taking user input and adding the value to x.
    std::cout << "The number you have entered is " << x << "\n";
    std::string s; // Declares var s with a string type.

    y = 2 * x;
    x = 5 + y; 

    std::cout << "x == " << x <<"\n";
    std::cout << "y == " << y << "\n";
    
    
    std::cout << "Enter a string ";
    std::cin >> s;
    std::cout << "You entered " << s << "\n";

    return 0;

}