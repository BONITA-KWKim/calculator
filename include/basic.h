#ifndef __BASIC_H__
#define __BASIC_H__

#include <cassert>

class BasicOperation {
public:
    BasicOperation(){}
    ~BasicOperation(){}

    int sum(int a1, int a2);
    int substract(int a1, int a2);
    int multiple(int a1, int a2);
    float divide(int a1, int a2);
};

#endif //__BASIC_H__