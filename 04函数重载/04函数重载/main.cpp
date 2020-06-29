//
//  main.cpp
//  04函数重载
//
//  Created by Fu,Sheng on 2018/4/16.
//  Copyright © 2018年 baidu. All rights reserved.
//

#include <iostream>

using namespace std;
/*
    1. 定义：函数名相同，参数列表不同。（返回值不同不能构成重载）
    2. 原理：倾轧（name mangling），函数定义和调用的时候都会对函数做一次倾轧，以便匹配。
    3. 匹配原则：
        3.1 根据上下文语义,严格匹配。
        3.2 通过隐式转换匹配。（如：int、double、long、float之间的隐式转换）
    4. 优于C++是可以完全兼容C语言的，但是C语言不支持函数重载，所以C++在使用C的时候需要使用 extern "C"
 */


void print1(int a){
    cout<<"print1(int a)"<<endl;
}

void print1(float a){
    cout<<"print1(float a)"<<endl;
}

extern "C"
{
    
    void print1(double a){
        printf("print1(double a) \n");
    }
//  C语言因为不会发生倾轧操作，所以不能使用重载，编译失败
//    void print1(long a){
//        printf("print1(long a) \n");
//    }
}

struct complex {
    int real;
    int image;
    void display(){
        cout<<"("<<real<<","<<image<<")"<<endl;
    }
};

complex operator+(complex a,complex b){
    complex c;
    c.real = a.real + b.real;
    c.image = a.image + b.image;
    return c;
}


int main(int argc, const char * argv[]) {
    /* 根据上下文语义决定调用哪个函数 */
    int a = 10;
    float b = 0.1;
    print1(a);
    print1(b);
    
    /* 运算符重载 */
    complex aa = {1,2};
    complex bb = {3,4};
    complex cc = aa + bb;
    cc.display();
    return 0;
}
