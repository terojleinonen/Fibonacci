#include <iostream>
#ifndef printFibonacciNumbersOnScreen_hpp
#define printFibonacciNumbersOnScreen_hpp
namespace printFibonacciNamespace{
    class printFibonacciClass{
        public:        
        void printFibonacciNumbersOnScreenFunction(int quantity){
            uint64_t oldValue = 0;
            uint64_t newValue = 1;
        
            for (int i = 0; i < quantity; ++i) {        
                newValue = newValue + oldValue;
                std::swap(oldValue, newValue);
                std::cout << newValue << std::endl;  
            }
        }
            ~printFibonacciClass(){
                std::cout <<"destructor called!"<<std::endl;
            }
    };
}

#endif