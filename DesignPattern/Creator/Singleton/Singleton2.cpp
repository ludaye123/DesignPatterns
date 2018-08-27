//
//  Singleton2.cpp
//  DesignPattern
//
//  Created by Shen Lu on 2018/8/23.
//  Copyright © 2018 Shen Lu. All rights reserved.
//

#include "Singleton2.hpp"

using namespace ls;
using namespace std;


/**
 * 懒汉模式下，在定义m_instance变量时先等于NULL，在调用GetInstance()方法时，
 * 在判断是否要赋值。这种模式，并非是线程安全的，因为多个线程同时调用GetInstance()方法，就可能导致有产生多个实例。要实现线程安全，就必须加锁。
 */
//shared_ptr<Singleton2> Singleton2::getInstance() {
//    if (m_instance == nullptr) {
//        m_instance = make_shared<Singleton2>();
//    }
//
//    return m_instance;
//}

// GetInstance()方法，每次进来都要加锁，会影响效率
//shared_ptr<Singleton2> Singleton2::getInstance() {
//    lock_guard<mutex> lock(m_mutex);
//    if (m_instance == nullptr) {
//        m_instance = make_shared<Singleton2>();
//    }
//
//    return m_instance;
//}



//shared_ptr<Singleton2> Singleton2::getInstance() {
//    if (m_instance == nullptr) {
//        lock_guard<mutex> lock(m_mutex);
//        if (m_instance == nullptr) {
//            m_instance = make_shared<Singleton2>();
//        }
//    }
//    
//    return m_instance;
//}


//shared_ptr<Singleton2> Singleton2::getInstance() {
//    if (m_instance == nullptr) {
//        lock_guard<mutex> lock(m_mutex);
//        if (m_instance == nullptr) {
//            shared_ptr<Singleton2> tmp = make_shared<Singleton2>();
//            m_instance = tmp;
//        }
//    }
//
//    return m_instance;
//}


shared_ptr<Singleton2> Singleton2::getInstance() {
    if (m_instance == nullptr) {
        lock_guard<mutex> lock(m_mutex);
        if (m_instance == nullptr) {
            shared_ptr<Singleton2> tmp = make_shared<Singleton2>();
            m_instance = tmp;
        }
    }
    
    return m_instance;
}

