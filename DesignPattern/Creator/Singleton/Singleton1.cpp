//
//  Singleton1.cpp
//  DesignPattern
//
//  Created by Shen Lu on 2018/8/23.
//  Copyright © 2018 Shen Lu. All rights reserved.
//

#include "Singleton1.hpp"

using namespace ls;
using namespace std;

shared_ptr<Singleton1> Singleton1::getInstance() {
    return m_instance;
}

std::shared_ptr<Singleton1> Singleton1::m_instance = std::shared_ptr<Singleton1>();
