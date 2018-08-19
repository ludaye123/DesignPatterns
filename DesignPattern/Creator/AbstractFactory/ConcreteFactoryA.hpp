//
//  ConcreteFactory1.hpp
//  DesignPattern
//
//  Created by Shen Lu on 2018/8/19.
//  Copyright © 2018 Shen Lu. All rights reserved.
//

#ifndef ConcreteFactory1_hpp
#define ConcreteFactory1_hpp

#include "AbstractFactory.hpp"

namespace ls {
    class ConcreteFactoryA: public AbstractFactory {
    public:
        ConcreteFactoryA();
        ~ConcreteFactoryA();
        
        virtual std::shared_ptr<AbstractProductA> createProductA();
        virtual std::shared_ptr<AbstractProductB> createProductB();
    };
}

#endif /* ConcreteFactory1_hpp */
