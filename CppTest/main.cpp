//
//  main.cpp
//  CppTest
//
//  Created by rehab on 2021/6/7.
//

#include <iostream>
#include "ClassTemplate.hpp"
#include "FunctionTemplate.hpp"
#include "UnionTemplate.hpp"
#include "VariableTemplate.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    pair<int, char> p1{1, 'x'};
    pair<float, float> p2{1.2, 1.3};
    std::cout<<p1.getFirst()<<":"<<p1.getSecond()<<std::endl;
    std::cout<<p2.getFirst()<<":"<<p2.getSecond()<<std::endl;
    
    std::cout<<min<int>(4,6)<<std::endl;
    std::cout<<min<float>(4.1,6.7)<<std::endl;
    
    uniontest<int> unionTest;
    unionTest.variable = 1234;
    std::cout<<(int)unionTest.ch[0]<<"-"<<(int)unionTest.ch[1]<<"-"<<(int)unionTest.ch[2]<<"-"<<(int)unionTest.ch[3]<<std::endl;
    
    
    std::cout<<pi<float><<std::endl;
    std::cout<<pi<int><<std::endl;
    return 0;
}
