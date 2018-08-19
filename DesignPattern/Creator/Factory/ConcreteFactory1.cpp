//
//  ConcreteFactory1.cpp
//  DesignPattern
//
//  Created by Shen Lu on 2018/8/19.
//  Copyright © 2018 Shen Lu. All rights reserved.
//

#include <iostream>

#include "ConcreteFactory1.hpp"

#include "ConcreteProduct1.hpp"
#include "ConcreteProduct2.hpp"
#include "ConcreteProduct3.hpp"

using namespace ls;
using namespace std;

ConcreteFactory1::ConcreteFactory1() {
    cout << "ConcreteFactory1 Created" << endl;
}

ConcreteFactory1::~ConcreteFactory1() {
    cout << "ConcreteFactory1 Destory" << endl;
}

shared_ptr<Product> ConcreteFactory1::createProduct(ProductType type) {
    shared_ptr<Product> pProduct;
    switch (type) {
        case Concrete1:
            pProduct.reset(new ConcreteProduct1());
            break;

        case Concrete2:
            pProduct.reset(new ConcreteProduct2());
            break;

        case Concrete3:
            pProduct.reset(new ConcreteProduct3());
            break;

        default:
            break;
    }

    return pProduct;
}
