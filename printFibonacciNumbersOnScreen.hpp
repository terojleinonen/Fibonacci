#include <iostream>
#ifndef printFibonacciNumbersOnScreen_hpp
#define printFibonacciNumbersOnScreen_hpp
namespace printFibonacciNumbersOnScreenNamespace{
    class printFibonacciNumbersOnScreenClass{
        private:
            template<typename T,typename V, typename U>
            void swapElements(T &newNumber, V &oldNumber, U &tempNumber){
                oldNumber = newNumber;
                newNumber = tempNumber;
            }
            template<typename U>
            void printOnScreen(U element){
                std::cout << element <<std::endl;
            }
           
            uint64_t add(uint64_t x, uint64_t y){
                return (x + y);
            }

        public:        
        void printFibonacciNumbersOnScreenFunction(int MAX){
            uint64_t newNumber = 1;
            uint64_t oldNumber = 0;
        
            for (int i = 0; i < MAX; ++i) {        
                if ( i == 0)
                    printOnScreen(oldNumber);
                else {
                    uint64_t nextNumber = add(oldNumber, newNumber);
                    printOnScreen(nextNumber);
                    swapElements(oldNumber, newNumber, nextNumber);
                    }
                }        
            }
            ~printFibonacciNumbersOnScreenClass(){
                std::cout <<"destructor called!"<<std::endl;
            }
    };
}

#endif