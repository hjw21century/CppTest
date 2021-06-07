//
//  VariadicTemplate.hpp
//  CppTest
//
//  Created by rehab on 2021/6/7.
//

#ifndef VariadicTemplate_hpp
#define VariadicTemplate_hpp

#include <stdio.h>
#include <iostream>
//template<typename T, typename... Rest>
//struct Tuple<T, Rest...>{
//    T first;
//    Tuple<Rest...> rest;
//
//    Tuple(const T& f, const Rest& ... r): first(f), rest(r...){
//
//    }
//};

template<typename First, typename... Rest>
void print(First&& first, Rest&&... rest){
    if constexpr(sizeof...(rest)>0){
        std::cout<<first<<std::endl;
        print(std::forward<Rest>(rest)...);
    }else{
        std::cout<<first<<std::endl;
    }
    
    
}

#endif /* VariadicTemplate_hpp */
