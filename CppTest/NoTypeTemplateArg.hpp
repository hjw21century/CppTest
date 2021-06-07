//
//  NoTypeTemplateArg.hpp
//  CppTest
//
//  Created by rehab on 2021/6/7.
//

#ifndef NoTypeTemplateArg_hpp
#define NoTypeTemplateArg_hpp

#include <stdio.h>
template<class T, size_t size>
T* begin(T (&arr)[size]){
    return arr;
}

#endif /* NoTypeTemplateArg_hpp */
