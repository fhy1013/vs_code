#ifndef _ABSTRACT_PRODUCT_H_
#define _ABSTRACT_PRODUCT_H_
// 抽象产品类
class AbstractProduct {
   public:
    AbstractProduct() {}
    // 抽象产品 接口
    virtual void Play() = 0;
};
#endif  // _ABSTRACT_PRODUCT_H_