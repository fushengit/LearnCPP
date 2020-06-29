//
//  main.cpp
//  09类型强转typecast
//
//  Created by fusheng on 2020/6/29.
//  Copyright © 2020 fusheng. All rights reserved.
//

#include <iostream>

/*
 C语言强转:C语言强转只需要在前面加上(TYPE EXPECTION) 就能实现强转。
 CPP强转：
    静态类型转换 static_cast<目标类型> (标识符): 在一个方向上可以作隐式转换，在另外一个方向上就可以作静态转换。
    重解释转换 reinterpret_cast<目标类型> (标识符) : 通常为操作数的位模式提供较低层的重新解释。
    常量类型转换 const_cast<目标类型> (标识符): 目标类型只能是指针或者引用，去除const的限定，一般并不是为了修改他的内容，主要是为了函数接受参数。
    动态类型转换 dynamic_cast<目标类型> (标识符)：主要用于多态中的父子类型转换。
    
 */

extern "C" {
    void typecast_c(){
        int a = 10;
        float b = (float)a;
        printf("%f \n",b);
    }
}

using namespace std;

void static_cast_test() {
    int a = 10;
    int b = 3;
    cout << static_cast<float>(a) << endl; // 输出 10
    cout << a / b << endl; // 输出3
    cout << static_cast<float>(a) / b << endl; // 输出 3.33333
    
    int *p; void *q = nullptr;
    // p --> q 可以隐式转换， 但是 q -> p 不能隐式转换
    p = static_cast<int *>(q);
    cout << p << endl;
}

void reinterpret_cast_test() {
    int x = 0x12345678;
    cout << x << endl;
    char *p = reinterpret_cast<char *>(&x);
    cout << *p << endl;
    // char *q = static_cast<char *>(&x); 编译不通过。
}


void func_test(int &a) {
    cout << a << endl;
    a = 111;
}

void const_cast_test() {
    const int a = 100;
    func_test(const_cast<int&>(a)); // 输出100
    cout << a << endl; // 输出 111，虽然去掉了const，但是仍然不能修改值。
}

int main(int argc, const char * argv[]) {
//    typecast_c();
//    static_cast_test();
//    reinterpret_cast_test();
    const_cast_test();
    return 0;
}
