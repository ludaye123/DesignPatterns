//
//  AbstractProductA.hpp
//  DesignPattern
//
//  Created by Shen Lu on 2018/8/19.
//  Copyright © 2018 Shen Lu. All rights reserved.
//

#ifndef AbstractProductA_hpp
#define AbstractProductA_hpp

#include <stdio.h>

namespace ls {
    class AbstractProductA {
    public:
        virtual ~AbstractProductA() { }
        
    protected:
        AbstractProductA() = default;
    };
}

#endif /* AbstractProductA_hpp */
