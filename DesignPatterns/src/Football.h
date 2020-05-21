#ifndef _FOOTBALL_H_
#define _FOOTBALL_H_
// 具体产品类
#include <iostream>

#include "AbstractProduct.h"

class Football : public AbstractProduct {
   public:
    Football() { Play(); }
    void Play() { std::cout << "play Football" << std::endl; }
};

#endif  // _FOOTBALL_H_