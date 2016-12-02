//
// Created by 王青龙 on 02/12/2016.
//

#ifndef TEST_VIRTUAL_FUNCTION_DERIVE_H
#define TEST_VIRTUAL_FUNCTION_DERIVE_H

#include "base.h"

class B:public A{
public:
    B();
    void print();

//private:
    int m;
};

#endif //TEST_VIRTUAL_FUNCTION_DERIVE_H
