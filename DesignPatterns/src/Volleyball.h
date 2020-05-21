#ifndef _VOLLEYBALL_H_
#define _VOLLEYBALL_H_
// 具体产品类
#include <iostream>

#include "AbstractProduct.h"

class Volleyball : public AbstractProduct {
   public:
    Volleyball() { Play(); }
    void Play() { std::cout << "play Volleyball" << std::endl; }
};

#endif  // _VOLLEYBALL_H_