#include <iostream>
#include "printFibonacciNumbersOnScreen.hpp"

int main(/*int argc, const char * argv[]*/) {
    int quantity = 100;
    countFibonacciNumbers::solutions fibonacci;
    fibonacci.printOnScreen(quantity);
    fibonacci.containerPrintOnSCreen(quantity);
    fibonacci.recursivePrintOnSCreen(quantity);    
    return 0;
}