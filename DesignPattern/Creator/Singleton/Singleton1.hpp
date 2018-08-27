//
//  Singleton1.hpp
//  DesignPattern
//
//  Created by Shen Lu on 2018/8/23.
//  Copyright © 2018 Shen Lu. All rights reserved.
//

#ifndef Singleton1_hpp
#define Singleton1_hpp

#include <memory>

// 饿汉模式
// 在实例化m_instance 变量时，直接调用类的构造函数。顾名思义，在还未使用变量时，已经对m_instance进行赋值，就像很饥饿的感觉
// 这种模式，在多线程环境下肯定是线程安全的，因为不存在多线程实例化的问题
namespace ls {
    class Singleton1 {
    private:
        static std::shared_ptr<Singleton1> m_instance;
        
    public:
        static std::shared_ptr<Singleton1> getInstance();
        
    private:
        Singleton1() = default;
        Singleton1(const Singleton1 &s) = delete ;
        Singleton1 operator = (const Singleton1 &s) = delete;
    };
}

#endif /* Singleton1_hpp */
