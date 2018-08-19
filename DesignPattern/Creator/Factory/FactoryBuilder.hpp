//
//  FactoryBuilder.hpp
//  DesignPatterns
//
//  Created by Shen Lu on 2018/8/18.
//  Copyright © 2018 Shen Lu. All rights reserved.
//

#ifndef FactoryBuilder_hpp
#define FactoryBuilder_hpp

#include <memory>

namespace ls {
    typedef enum FactoryType {
        Factory1 = 0,
        Factory2 = 1
    }FactoryType;
    class Factory;
    class FactoryBuilder {
    public:
        static std::shared_ptr<Factory> createFactory(FactoryType type);
    };
}

#endif /* FactoryBuilder_hpp */
