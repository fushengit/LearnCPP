//
//  main.cpp
//  02表达式被赋值C++
//
//  Created by Fu,Sheng on 2018/4/10.
//  Copyright © 2018年 baidu. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int a;
    (a = 3+5) = 10;
    std::cout<<"a = "<<a<<std::endl;
    return 0;
}
