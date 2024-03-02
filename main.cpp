#include "printFibonacciNumbersOnScreen.hpp"

int main(/*int argc, const char * argv[]*/) {
    int quantity = 20;
    countFibonacciNumbers::solutions fibonacci;
    //fibonacci.printOnScreen(quantity);
    //fibonacci.containerPrintOnSCreen(quantity);
    fibonacci.recursivePrintOnSCreen(quantity);
    
    return 0;
}