//
//  NestedTemplateArg.hpp
//  CppTest
//
//  Created by rehab on 2021/6/7.
//

#ifndef NestedTemplateArg_hpp
#define NestedTemplateArg_hpp

#include <stdio.h>
#include <iostream>

template<template<typename>class C, typename T>
void print_container(C<T> &c){
    std::cout<<c<<"\n";
}

template <typename T>
class MyType{
private:
    T va;
public:
    MyType(T vain): va(vain){};
    friend std::ostream& operator<<(std::ostream& os, const MyType& myType)
    {
        os << "value:"<<myType.va;
        return os;
    }
};

#endif /* NestedTemplateArg_hpp */
