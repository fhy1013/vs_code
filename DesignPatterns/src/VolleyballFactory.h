#ifndef _VOLLEYBALL_FACTORY_H_
#define _VOLLEYBALL_FACTORY_H_
// 具体产品工厂类
#include "AbstractFactory.h"
#include "Volleyball.h"

class VolleyballFactory : public AbstractFactory {
   public:
    AbstractProduct* GetProduct() { return new Volleyball(); }
};
#endif  // _VOLLEYBALL_FACTORY_H_