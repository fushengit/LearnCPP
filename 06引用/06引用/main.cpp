//
//  main.cpp
//  06引用
//
//  Created by Fu,Sheng on 2018/4/18.
//  Copyright © 2018年 baidu. All rights reserved.
//

#include <iostream>
using namespace std;

/*
    引用是C++中经常会用到的，目的是在去指针化
    1. 区别引用 和 取地址符 （这一点非常关键）
    2. 引用是一种声明关系，并不会开辟内存空间（被引用的对象必须已经初始化,且不为null）
    3. 引用是一种声明关系，一经引用，就不能变更
 */

void test1(){
    int a = 10;
    int b = 100;
    int& pa = a; //作为声明pa此时是一个引用类型（一般在声明的时候用到）
    int* pb = &b; //&作为对b的取地址符
    pa = 11;
    *pb = 111;
    cout<<a<<endl;
    cout<<b<<endl;
    a = 1111;   //原值改变，引用跟着改变
    cout<<pa<<endl;
}

void test2(){
    int* a;
    int*& pa = a;
    *pa = 100; //编译虽然通过，但是会crash在这里（因为引用的对象必须被初始化，这里没有初始化）
    cout<<a<<endl;
}

void test3(){
    int a = 10;
    int b = 100;
    int& pa = a;
    pa = b;
    pa = 11;
    cout<<a<<endl;
    cout<<b<<endl;// 编译虽然通过，但是 pa = b 这句不起作用，因为pa已经声明为了a,不能变更。
}

int main(int argc, const char * argv[]) {
    test3();
    return 0;
}
