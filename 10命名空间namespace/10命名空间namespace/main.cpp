//
//  main.cpp
//  10命名空间namespace
//
//  Created by fusheng on 2020/6/29.
//  Copyright © 2020 fusheng. All rights reserved.
//

#include <iostream>
#include "a.cpp"
#include "b.cpp"

/*
 C语言因为没有命名空间，就会有非常大的同名函数和全局变量产生冲突的风险。
 
 C++中默认是global空间。使用命名空间实际上是对global空间的再次分割。
 */

// 1. 命名空间的声明
namespace NAMESPACE {
    // 全局变量
    int a;
    // 数据类型
    struct stu{};
    // 函数
    void func();
    // 其他命名空间
    namespace NAMESPACE1 {}
};

// 2. 使用方法
void test() {
    // 1. 直接指定命名空间
    NAMESPACE::a = 10;
    // 2. using + 命名空间 + 变量
    using NAMESPACE::a;
    a = 10;
    // 3. using namespace + 命名空间
    using namespace NAMESPACE;
    a = 10;
}

// 3. 不同命名空间的相同定义处理
namespace A {
    int a = 0;
}

namespace B {
    int a = 1;
}

void test1() {
    int a1;
    int a2;
    {
        using namespace A;
        a1 = a;
    }
    {
        using namespace B;
        a2 = a;
    }
    using namespace std;
    cout<<"a1="<<a1<<" a2="<<a2<<endl; //a1=0 a2=1
}

// 3. 相同命名空间的在不同的文件内也会引起编译失败
void test2() {
    using namespace std;
    using namespace Test;
//    cout << "t=" << t << " tt=" << tt << endl;
}

int main(int argc, const char * argv[]) {
//    test1();
    test2();
    return 0;
}
