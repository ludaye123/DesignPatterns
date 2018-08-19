//
//  Factory.hpp
//  DesignPattern
//
//  Created by Shen Lu on 2018/8/19.
//  Copyright © 2018 Shen Lu. All rights reserved.
//

#ifndef Factory_hpp
#define Factory_hpp

#include <memory>

namespace ls {
    typedef enum ProductType_ {
        Concrete1 = 0,
        Concrete2,
        Concrete3,
        Concrete4,
        Concrete5,
        Concrete6
    }ProductType;
    
    class Product;
    class Factory {
    public:
        Factory(const Factory &factory) = delete;
        Factory & operator = (const Factory & factory) = delete;

        virtual ~Factory() {}
        
        virtual std::shared_ptr<Product> createProduct(ProductType type) = 0;
        
    protected:
        Factory() = default;
    };
}

#endif /* Factory_hpp */
