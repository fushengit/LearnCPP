//
//  main.cpp
//  05默认参数
//
//  Created by Fu,Sheng on 2018/4/16.
//  Copyright © 2018年 baidu. All rights reserved.
//

#include <iostream>

/*
 默认参数的顺序：从右到左，中间不能有间隔。
 默认参数先声明，后定义。
 默认参数和函数重载不能结合使用，容易出现函数二义性。
 */

using namespace std;

void test1(int a, float b = 0.1){
    cout<<"test1(int a, float b = 0.1)"<<endl;
}
/* 默认参数只能放在最后，并且中间不能有间隔 */
//void test2(int a, double b = 0.0001, float c){  //编译不能通过
//    cout<<"a+b+c = "<<a+b+c<<endl;
//}

/* 默认参数和重载结合造成函数的二义性 */
void test2(int a, float b = 0.1){
    cout<<"test1(int a, float b = 0.1)"<<endl;
}
void test2(int a){
    cout<<"test1(int a)"<<endl;
}

int main(int argc, const char * argv[]) {
    // 默认参数，可以不写
    test1(1,2);
    test1(3);
//    test2(2);  //函数二义性，无法编译通过.
    return 0;
}
