#ifndef countFibonacciNumbers_hpp
#define countFibonacciNumbers_hpp

#include <iostream>
#include <vector>

namespace countFibonacciNumbersNamespace{

    class countFibonacciNumbersClass {

        private:
            std::vector<int> numbers;

            void printContainerElementsFunction(std::vector<int> &container){
                for (auto element : container)
                {
                    std::cout << element << std::endl;            
                }
            }

        public:

            void countFibonacciNumbersFunction(int MAX){
        
                for (int i = 0; i < MAX; ++i) {
        
                    if ( i == 0 || i == 1)
                    numbers.push_back(i);
                    else
                    numbers.push_back(numbers[i - 1] + numbers[i-2]);
                }
                printContainerElementsFunction(numbers);
            }
        
            ~countFibonacciNumbersClass(){
                std::cout <<"destructor called!"<<std::endl;
            }

    };
}

#endif