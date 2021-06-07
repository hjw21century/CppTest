//
//  FunctionTemplate.hpp
//  CppTest
//
//  Created by rehab on 2021/6/7.
//

#ifndef FunctionTemplate_hpp
#define FunctionTemplate_hpp

#include <stdio.h>
template <typename T>
T min(T a, T b){
    return a<b?a:b;
}

#endif /* FunctionTemplate_hpp */
