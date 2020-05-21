// 工厂模式 使用示例
#include "AbstractFactory.h"
#include "AbstractProduct.h"
#include "FootballFactory.h"
#include "VolleyballFactory.h"

void AbstractFactoryTest() {
    AbstractProduct *pro = nullptr;
    AbstractFactory *fac = nullptr;

    fac = new FootballFactory();
    pro = fac->GetProduct();

    fac = new VolleyballFactory();
    pro = fac->GetProduct();
}