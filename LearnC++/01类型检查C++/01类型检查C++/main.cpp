//
//  main.cpp
//  01类型检查C++
//
//  Created by Fu,Sheng on 2018/4/10.
//  Copyright © 2018年 baidu. All rights reserved.
//

#include <iostream>

/*
 C++的类型检查比C更加的严格
 1. const检查
 2. enum检查
 3. 等等（后续补充）
 */
void test1(){
    const int a = 10;
    //int* pa = &a; //编译不能通过
    const int *pa = &a;
    //*pa = 100;  //编译不能通过
}

enum weather{
    spr,
    sum,
    aut,
    win
};
void test2(){
    weather w1 = spr;
    std::cout<<"today weather is "<<w1<<std::endl;
    //weather w2 = 0; //编译不能通过，虽然spr的值是0，但是因为类型检查也是不能通过的
}

int main(int argc, const char * argv[]) {
//    test1();
    test2();
    return 0;
}
