#ifndef _FOOTBALL_FACTORY_H_
#define _FOOTBALL_FACTORY_H_
// 具体产品工厂类
#include "AbstractFactory.h"
#include "Football.h"

class FootballFactory : public AbstractFactory {
   public:
    AbstractProduct* GetProduct() { return new Football(); }
};
#endif  // _FOOTBALL_FACTORY_H_