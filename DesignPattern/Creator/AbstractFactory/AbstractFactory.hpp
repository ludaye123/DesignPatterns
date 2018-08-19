//
//  AbstractFactory.hpp
//  DesignPattern
//
//  Created by Shen Lu on 2018/8/19.
//  Copyright © 2018 Shen Lu. All rights reserved.
//

#ifndef AbstractFactory_hpp
#define AbstractFactory_hpp

#include <memory>

namespace ls {
    class AbstractProductA;
    class AbstractProductB;
    class AbstractFactory {
    public:
        AbstractFactory(const AbstractFactory & factory) = delete;
        AbstractFactory & operator = (const AbstractFactory & factory) = delete;
        virtual ~AbstractFactory() {}
        
        virtual std::shared_ptr<AbstractProductA> createProductA() = 0;
        virtual std::shared_ptr<AbstractProductB> createProductB() = 0;
        
    protected:
        AbstractFactory() = default;
    };
}

#endif /* AbstractFactory_hpp */
