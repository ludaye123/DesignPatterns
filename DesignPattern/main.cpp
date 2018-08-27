//
//  main.cpp
//  DesignPattern
//
//  Created by Shen Lu on 2018/8/19.
//  Copyright © 2018 Shen Lu. All rights reserved.
//

#include <iostream>

#include "FactoryBuilder.hpp"
#include "Factory.hpp"
#include "Product.hpp"


#include "ConcreteProductA1.hpp"
#include "ConcreteProductB1.hpp"

#include "ConcreteProductA2.hpp"
#include "ConcreteProductB2.hpp"

#include "ConcreteFactoryA.hpp"
#include "ConcreteFactoryB.hpp"

using namespace ls;

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    //    std::shared_ptr<ProductFactory> factory = std::make_shared<ProductFactory>();
    //    std::shared_ptr<Product> p1 = factory->createProduct(Concrete1);
    //    std::shared_ptr<Product> p2 = factory->createProduct(Concrete2);
    //    std::shared_ptr<Product> p3 = factory->createProduct(Concrete3);
    
    
//    std::shared_ptr<Factory> f1 = FactoryBuilder::createFactory(Factory1);
//    std::shared_ptr<Product> p1 = f1->createProduct(Concrete1);
//    std::shared_ptr<Product> p2 = f1->createProduct(Concrete2);
//    std::shared_ptr<Product> p3 = f1->createProduct(Concrete3);
//
//    std::shared_ptr<Factory> f2 = FactoryBuilder::createFactory(Factory2);
//    std::shared_ptr<Product> p4 = f2->createProduct(Concrete4);
//    std::shared_ptr<Product> p5 = f2->createProduct(Concrete5);
//    std::shared_ptr<Product> p6 = f2->createProduct(Concrete6);
    
    
    std::shared_ptr<AbstractFactory> pf = std::make_shared<ConcreteFactoryA>();
    std::shared_ptr<AbstractProductA> ppa = pf->createProductA();
    std::shared_ptr<AbstractProductB> ppb = pf->createProductB();
    
    
    pf = std::make_shared<ConcreteFactoryB>();
    ppa = pf->createProductA();
    ppb = pf->createProductB();

    
    return 0;
}
