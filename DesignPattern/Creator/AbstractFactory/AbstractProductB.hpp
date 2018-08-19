//
//  AbstractProductB.hpp
//  DesignPattern
//
//  Created by Shen Lu on 2018/8/19.
//  Copyright © 2018 Shen Lu. All rights reserved.
//

#ifndef AbstractProductB_hpp
#define AbstractProductB_hpp

#include <stdio.h>

namespace ls {
    class AbstractProductB {
    public:
        virtual ~AbstractProductB() {}
        
    protected:
        AbstractProductB() = default;
    };
}

#endif /* AbstractProductB_hpp */
