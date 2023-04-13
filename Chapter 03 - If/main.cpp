#include <iostream>
#include <string>

int main() {
    int x;
    int y;
    
    std::cout << "Hello enter a number.\n";
    std::cin >> x;

    if (!std::cin){
        std::cout << "That is not a number!\n";

        return 1;

    }

    std::cout << "Enter a number!\n";
    
    if(!(std::cin >> y)){ // if y fails to take an int as the input the condition will be met.
        std::cout << "That is not a number!\n";
        return 1;
    }

    

    if (x < y){
        printf("Second number %d is greater than %d\n", y, x);

    } else {
        if(x == y){
            std::cout << "The two numbers are equal!\n";
        } else {
            printf("First number %d is greater than %d\n", x, y);
        }
    }

    std::cout << "Enter two numbers\n";
    if(std::cin >> x >> y){
        printf("You did it right, your first number was %d and the second number was %d\n", x , y);
    }else{
        std::cout << "You did not enter numbers correctly!\n";
    }



    return 0;
}