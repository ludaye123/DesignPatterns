//
//  ConcreteFactory1.cpp
//  DesignPattern
//
//  Created by Shen Lu on 2018/8/19.
//  Copyright © 2018 Shen Lu. All rights reserved.
//

#include <iostream>

#include "ConcreteFactoryA.hpp"
#include "ConcreteProductA1.hpp"
#include "ConcreteProductB1.hpp"

using namespace ls;
using namespace std;

ConcreteFactoryA::ConcreteFactoryA() {
    cout << "ConcreteFactoryA Created" << endl;
}

ConcreteFactoryA::~ConcreteFactoryA() {
    cout << "ConcreteFactoryA Destory" << endl;
}

shared_ptr<AbstractProductA> ConcreteFactoryA::createProductA() {
    return make_shared<ConcreteProductA1>();
}

shared_ptr<AbstractProductB> ConcreteFactoryA::createProductB() {
    return make_shared<ConcreteProductB1>();
}

