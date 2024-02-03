#include <iostream>
#ifndef printFibonacciNumbersOnScreen_hpp
#define printFibonacciNumbersOnScreen_hpp
namespace countFibonacciNumbers{
            
     void printOnScreen(int quantity){
        uint64_t oldValue = 0;
        uint64_t newValue = 1;
        
        for (int i = 0; i < quantity; ++i) {        
            newValue = newValue + oldValue;
            std::swap(oldValue, newValue);
            std::cout << newValue << std::endl;  
        }
    }
}
#endif