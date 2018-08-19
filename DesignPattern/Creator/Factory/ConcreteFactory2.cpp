//
//  ConcreteFactory2.cpp
//  DesignPattern
//
//  Created by Shen Lu on 2018/8/19.
//  Copyright © 2018 Shen Lu. All rights reserved.
//

#include <iostream>

#include "ConcreteFactory2.hpp"
#include "ConcreteProduct4.hpp"
#include "ConcreteProduct5.hpp"
#include "ConcreteProduct6.hpp"

using namespace ls;
using namespace std;

ConcreteFactory2::ConcreteFactory2() {
    cout << "ConcreteFactory2 Created" << endl;
}

ConcreteFactory2::~ConcreteFactory2() {
    cout << "ConcreteFactory2 Destory" << endl;
}

shared_ptr<Product> ConcreteFactory2::createProduct(ProductType type) {
    shared_ptr<Product> pProduct;
    switch (type) {
        case Concrete4:
            pProduct.reset(new ConcreteProduct4());
            break;

        case Concrete5:
            pProduct.reset(new ConcreteProduct5());
            break;

        case Concrete6:
            pProduct.reset(new ConcreteProduct6());
            break;

        default:
            break;
    }

    return pProduct;
}
