#include <iostream>
#ifndef printFibonacciNumbersOnScreen_hpp
#define printFibonacciNumbersOnScreen_hpp
namespace printFibonacciNamespace{
    class printFibonacciClass{
        private:            
            template<typename U>
            void printOnScreen(U element){
                std::cout << element <<std::endl;
            }
        public:        
        void printFibonacciNumbersOnScreenFunction(int quantity){
            uint64_t newValue = 1;
            uint64_t oldValue = 0;
        
            for (int i = 0; i < quantity; ++i) {        
                if ( i < 2){
                    printOnScreen(oldValue);
                    std::swap(oldValue, newValue);
                    }
                else {
                    oldValue = oldValue + newValue;
                    printOnScreen(oldValue);
                    std::swap(oldValue, newValue);
                    }
                }        
            }
            ~printFibonacciClass(){
                std::cout <<"destructor called!"<<std::endl;
            }
    };
}

#endif