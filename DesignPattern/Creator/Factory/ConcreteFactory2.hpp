//
//  ConcreteFactory2.hpp
//  DesignPattern
//
//  Created by Shen Lu on 2018/8/19.
//  Copyright © 2018 Shen Lu. All rights reserved.
//

#ifndef ConcreteFactory2_hpp
#define ConcreteFactory2_hpp

#include "Factory.hpp"

namespace ls {
    class ConcreteFactory2: public Factory {
    public:
        ConcreteFactory2();
        ~ConcreteFactory2();
        
        virtual std::shared_ptr<Product> createProduct(ProductType type);
    };
}
#endif /* ConcreteFactory2_hpp */
