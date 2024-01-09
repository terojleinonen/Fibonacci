#include <iostream>
#ifndef printFibonacciNumbersOnScreen_hpp
#define printFibonacciNumbersOnScreen_hpp
namespace printFibonacciNumbersOnScreenNamespace{
    class printFibonacciNumbersOnScreenClass{
        private:            
            template<typename U>
            void printOnScreen(U element){
                std::cout << element <<std::endl;
            }
        public:        
        void printFibonacciNumbersOnScreenFunction(int quantity){
            uint64_t newNumber = 1;
            uint64_t oldNumber = 0;
        
            for (int i = 0; i < quantity; ++i) {        
                if ( i == 0)
                    printOnScreen(oldNumber);
                else {
                    uint64_t nextNumber = oldNumber + newNumber;
                    printOnScreen(nextNumber);
                    std::swap(oldNumber, newNumber);
                    std::swap(newNumber, nextNumber);
                    }
                }        
            }
            ~printFibonacciNumbersOnScreenClass(){
                std::cout <<"destructor called!"<<std::endl;
            }
    };
}

#endif