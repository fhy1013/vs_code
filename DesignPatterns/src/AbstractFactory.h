#ifndef _ABSTRACT_FACTORY_
#define _ABSTRACT_FACTORY_
// 抽象工厂类
#include "AbstractProduct.h"

class AbstractFactory {
   public:
    virtual AbstractProduct* GetProduct() = 0;
};

#endif  // _ABSTRACT_FACTORY_