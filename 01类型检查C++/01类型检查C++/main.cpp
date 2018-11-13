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
 其实const只是限定某个地址存储的内容不可修改
 比如int*p；读作p为指针，指向int，所以p为指向int的指针
 int*const p；读作p为常量，是指针，指向int，所以p为指向int的常量指针， p不可修改
 int const *p；p为指针，指向常量，为int，所以p为指向int常量的指针， *p不可修改
 int ** const p; p为常量，指向指针，指针指向int，所以p为指向int型指针的常量指针，p不可修改
 int const**p; p为指针，指向指针，指针指向常量int，所以p为指针，指向一个指向int常量的指针， **p为int，不可修改
 int * const *p ; p为指针，指向常量，该常量为指针，指向int，所以p为指针，指向一个常量指针，*p为指针，不可修改
 int ** const *p; p为指针，指向常量，常量为指向指针的指针，p为指针，指向常量型指针的指针，*p为指向指针的指针，不可修改
 int * const **p; p为指针，指向一个指针1，指针1指向一个常量，常量为指向int的指针，即p为指针，指向一个指向常量指针的指针， **p为指向一个int的指针，不可修改
 
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
