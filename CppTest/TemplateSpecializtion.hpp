//
//  TemplateSpecializtion.hpp
//  CppTest
//
//  Created by rehab on 2021/6/7.
//

#ifndef TemplateSpecializtion_hpp
#define TemplateSpecializtion_hpp

#include <stdio.h>
#include <iostream>

template<typename T>
T minv(T a, T b){
    return a<b?a:b;
}

template<typename T>
T maxv(T a, T b){
    return a>b?a:b;
}

//Function Template Specialization
template <typename T>
T mysqrt(T t){
    double lo = (float)minv<T>(1, t), hi = (float)maxv<T>(1, t), mid=0.0;
    
    while (lo*lo<t) {
        lo *= 10;
    }
    lo/=10;
    
    while (hi*hi>t){
        hi *= 0.1;
    }
    hi/=0.1;
    
    for (int i = 0; i<100; i++) {
        mid = (lo+hi)/2;
        if (mid*mid == t) {
            return (T)mid;
        }
        
        if(mid*mid>t) hi = mid;
        else lo = mid;
    }
    
    return (T)mid;
}

//template<>
//int mysqrt<int>(int t){
//    double lo = minv(1, t), hi = maxv(1, t), mid=0.0;
//
//    while (100*lo*lo<t) {
//        lo *= 10;
//    }
//    lo/=10;
//
//    while (100*hi*hi>t){
//        hi *= 0.1;
//    }
//    hi/=0.1;
//
//    for (int i = 0; i<100; i++) {
//        mid = (lo+hi)/2;
//        if (mid*mid == t) {
//            return (int)mid;
//        }
//
//        if(mid*mid>t) hi = mid;
//        else lo = mid;
//    }
//    return (int)mid;
//}

//Class Template Specialization
template <typename  T>
struct Vector{
    void print(){std::cout<<"print"<<std::endl;}
};

template <>
struct Vector<bool>{
    void print_bool(){std::cout<<"print_bool"<<std::endl;}
};
#endif /* TemplateSpecializtion_hpp */
