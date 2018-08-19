//
//  FactoryBuilder.cpp
//  DesignPatterns
//
//  Created by Shen Lu on 2018/8/18.
//  Copyright © 2018 Shen Lu. All rights reserved.
//

#include "FactoryBuilder.hpp"
#include "ConcreteFactory1.hpp"
#include "ConcreteFactory2.hpp"

using namespace ls;
using namespace std;

shared_ptr<Factory> FactoryBuilder::createFactory(FactoryType type) {
    shared_ptr<Factory> pFactory;
    switch (type) {
        case Factory1:
            pFactory.reset(new ConcreteFactory1());
            break;
            
        case Factory2:
            pFactory.reset(new ConcreteFactory2());
        default:
            break;
    }
    
    return pFactory;
}
