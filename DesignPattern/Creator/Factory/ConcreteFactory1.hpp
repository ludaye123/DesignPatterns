//
//  ConcreteFactory1.hpp
//  DesignPattern
//
//  Created by Shen Lu on 2018/8/19.
//  Copyright © 2018 Shen Lu. All rights reserved.
//

#ifndef ConcreteFactory1_hpp
#define ConcreteFactory1_hpp

#include "Factory.hpp"

namespace ls {
    class ConcreteFactory1: public Factory {
    public:
        ConcreteFactory1();
        ~ConcreteFactory1();
        
        virtual std::shared_ptr<Product> createProduct(ProductType type);
    };
}


#endif /* ConcreteFactory1_hpp */
