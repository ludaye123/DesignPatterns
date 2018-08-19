//
//  Product.hpp
//  DesignPatterns
//
//  Created by Shen Lu on 2018/8/18.
//  Copyright © 2018 Shen Lu. All rights reserved.
//

#ifndef Product_hpp
#define Product_hpp

#include <stdio.h>

namespace ls {
    class Product {
    public:
        virtual ~Product() {};
        
    protected:
        Product() {};
    };
}


#endif /* Product_hpp */
