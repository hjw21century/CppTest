//
//  UnionTemplate.hpp
//  CppTest
//
//  Created by rehab on 2021/6/7.
//

#ifndef UnionTemplate_hpp
#define UnionTemplate_hpp

#include <stdio.h>

template<typename T>
union uniontest{
    u_int8_t ch[sizeof(T)];
    T       variable;
};

#endif /* UnionTemplate_hpp */
