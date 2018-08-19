//
//  ConcreteFactoryB.hpp
//  DesignPattern
//
//  Created by Shen Lu on 2018/8/19.
//  Copyright © 2018 Shen Lu. All rights reserved.
//

#ifndef ConcreteFactoryB_hpp
#define ConcreteFactoryB_hpp

#include "AbstractFactory.hpp"

namespace ls {
    class ConcreteFactoryB: public AbstractFactory {
    public:
        ConcreteFactoryB();
        ~ConcreteFactoryB();
        
        virtual std::shared_ptr<AbstractProductA> createProductA();
        virtual std::shared_ptr<AbstractProductB> createProductB();
    };
}
#endif /* ConcreteFactoryB_hpp */
