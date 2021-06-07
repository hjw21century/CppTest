//
//  ClassTemplate.hpp
//  CppTest
//
//  Created by rehab on 2021/6/7.
//

#ifndef ClassTemplate_hpp
#define ClassTemplate_hpp

#include <stdio.h>

template<typename T1, typename T2>
class pair{
public:
    pair(T1 t1, T2 t2):first(t1), second(t2){};
    T1 getFirst(){return first;};
    T2 getSecond(){return second;};
private:
    T1 first;
    T2 second;
};


#endif /* ClassTemplate_hpp */
