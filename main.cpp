#include "countFibonacciNumbers.hpp"
#include "printFibonacciNumbersOnScreen.hpp"

int main(/*int argc, const char * argv[]*/) {
    int quantity = 10;
    countFibonacciNumbersNamespace::countFibonacciNumbersClass calculateAndPrint;
    calculateAndPrint.countFibonacciNumbersFunction(quantity);
    printFibonacciNumbersOnScreenNamespace::printFibonacciNumbersOnScreenClass justPrint;
    justPrint.printFibonacciNumbersOnScreenFunction(quantity);
    return 0;
}