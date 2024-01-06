#include <iostream>
#ifndef printFibonacciNumbersOnScreen_hpp
#define printFibonacciNumbersOnScreen_hpp
using customInt = unsigned long long int;

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
           
            customInt add(customInt x, customInt y){
                return (x + y);
            }

        public:        
        void printFibonacciNumbersOnScreenFunction(int MAX){
            customInt newNumber = 1;
            customInt oldNumber = 0;
        
            for (int i = 0; i < MAX; ++i) {        
                if ( i == 0)
                    printOnScreen(0);
                else {
                    customInt nextNumber = add(oldNumber, newNumber);
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