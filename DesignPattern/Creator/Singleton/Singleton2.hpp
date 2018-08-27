//
//  Singleton2.hpp
//  DesignPattern
//
//  Created by Shen Lu on 2018/8/23.
//  Copyright © 2018 Shen Lu. All rights reserved.
//

#ifndef Singleton2_hpp
#define Singleton2_hpp

#include <memory>
#include <mutex>
#include <pthread.h>

// 懒汉模式
namespace ls {
    class Singleton2 {
    private:
        static std::shared_ptr<Singleton2> m_instance;
        static std::mutex m_mutex;
        static pthread_once_t m_once;
        
    public:
        static std::shared_ptr<Singleton2> getInstance();
        
    private:
        Singleton2() = default;
        Singleton2(const Singleton2 &s) = delete;
        Singleton2& operator = (const Singleton2 &s) = delete;
    };
}

#endif /* Singleton2_hpp */
