#include <iostream>
#include <vector>
#ifndef printFibonacciNumbersOnScreen_hpp
#define printFibonacciNumbersOnScreen_hpp
namespace countFibonacciNumbers{    
    class solutions{
        public:

        void recursivePrintOnSCreen(int quantity, uint64_t newValue = 1, uint64_t oldValue = 0){
            if( quantity > 0) {
                newValue = newValue + oldValue;
                std::swap(oldValue,newValue);
                std::cout << newValue << std::endl;
                recursivePrintOnSCreen(--quantity, newValue, oldValue);
            }    
        }

        void containerPrintOnSCreen(int quantity){
            std::vector<uint64_t> fibonacciNumbers;

            for(int i = 0; i < quantity; ++i){
                if(i < 2){
                    fibonacciNumbers.push_back(i);
                    std::cout << fibonacciNumbers[i] << std::endl;
                } else {
                    fibonacciNumbers.push_back(fibonacciNumbers[i-1] + fibonacciNumbers[i-2]);
                    std::cout << fibonacciNumbers[i] << std::endl;
                }
            }
        }
            
        void printOnScreen(int quantity){
            uint64_t oldValue = 0;
            uint64_t newValue = 1;
        
            for (int i = 0; i < quantity; ++i) {         
                newValue = newValue + oldValue;
                std::swap(oldValue, newValue);
                std::cout << newValue << std::endl;  
            }
        }
        ~solutions(){
            std::cout << "Destructor called!" << std::endl;
        }
    };
}
#endif