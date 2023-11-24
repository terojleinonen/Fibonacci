#ifndef printFibonacciNumbersOnScreen_hpp
#define printFibonacciNumbersOnScreen_hpp
#include <iostream>

namespace printFibonacciNumbersOnScreenNamespace{

    class printFibonacciNumbersOnScreenClass{

        public:

            void printFibonacciNumbersOnScreenFunction(int MAX){
                int newNumber = 1;
                int oldNumber = 0;
                int tempNumber;
        
                for (int i = 0; i < MAX; ++i) {
        
                    if ( i == 0 || i == 1)
                    std::cout << i <<std::endl;
                    else {
                        tempNumber = oldNumber + newNumber;
                        std::cout << tempNumber <<std::endl;
                        oldNumber = newNumber;
                        newNumber = tempNumber;
                    }
                }
        
            }

            ~printFibonacciNumbersOnScreenClass(){
                std::cout <<"destructor called!"<<std::endl;
            }
    };
}

#endif