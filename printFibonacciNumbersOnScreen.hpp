#include <iostream>
#ifndef printFibonacciNumbersOnScreen_hpp
#define printFibonacciNumbersOnScreen_hpp
using customInt = unsigned long long int;

namespace printFibonacciNumbersOnScreenNamespace{
    class printFibonacciNumbersOnScreenClass{
        private:
            template<typename T, typename V, typename U>
            void swapElements(T &newNumber, V &oldNumber, U &tempNumber){
                oldNumber = newNumber;
                newNumber = tempNumber;
            };

        public:        
        void printFibonacciNumbersOnScreenFunction(int MAX){
            customInt newNumber = 1;
            customInt oldNumber = 0;
        
            for (int i = 0; i < MAX; ++i) {        
                if ( i == 0)
                    std::cout << i  + 1 << ": "  << 0 <<std::endl;
                else {
                    customInt nextNumber = oldNumber + newNumber;
                    std::cout << i + 1 << ": "<< nextNumber <<std::endl;
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