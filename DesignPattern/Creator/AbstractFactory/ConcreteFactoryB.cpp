//
//  ConcreteFactoryB.cpp
//  DesignPattern
//
//  Created by Shen Lu on 2018/8/19.
//  Copyright © 2018 Shen Lu. All rights reserved.
//

#include <iostream>

#include "ConcreteFactoryB.hpp"
#include "ConcreteProductA2.hpp"
#include "ConcreteProductB2.hpp"

using namespace ls;
using namespace std;

ConcreteFactoryB::ConcreteFactoryB() {
    cout << "ConcreteFactoryB Created" << endl;
}

ConcreteFactoryB::~ConcreteFactoryB() {
    cout << "ConcreteFactoryB Destory" << endl;
}

shared_ptr<AbstractProductA> ConcreteFactoryB::createProductA() {
    return make_shared<ConcreteProductA2>();
}

shared_ptr<AbstractProductB> ConcreteFactoryB::createProductB() {
    return make_shared<ConcreteProductB2>();
}

