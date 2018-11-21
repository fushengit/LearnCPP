//
//  main.cpp
//  07new&&delete
//
//  Created by Fu,Sheng on 2018/11/13.
//  Copyright © 2018年 Fu,Sheng. All rights reserved.
//

#include <iostream>
using namespace std;

/*
    1. new和delete 必须配对使用，不能混合alloc和free使用。
    2.
 */

// 开辟单变量地址空间
void test1(){
    int *p = new int; // 开辟一个sizeof(int) 大小空间
    *p = 10;
    cout<<*p<<endl;
    delete p;
    
    p = new int(20); //开辟sizeof(int) 大小空间，并初始化为20
    cout<<*p<<endl;
    delete p;
    
    string *p3 = new string("hello word"); //初始化一个字符串
    cout<<p3<<endl; //这里只会输出一个地址 0x100717980
    cout<<*p3<<endl; //这里才会真正输出hello word;
    delete p3;
}

// 开辟数组空间
void test2() {
    int *p = new int[5]; // 开辟大小为5的整形数组空间
    for (int i = 0; i<5; i++) {
        p[i] = i;
    }
    for (int i = 0; i<5; i++) {
        cout<<p[i]<<endl;
    }
    delete []p;

    p = new int[5]{5,4,3,2}; //开辟大小为5的整形数组空间,并初始化为
    for (int i = 0; i<5; i++) {
        cout<<p[i]<<endl;
    }
    delete []p;
    
    p = new int[5]{NULL}; //开辟大小为5的整形数组空间,NULL代表默认是0
    for (int i = 0; i<5; i++) {
        cout<<p[i]<<endl;
    }
    delete []p;
}


// 多维数组空间
void test3(){
    
}

int main(int argc, const char * argv[]) {
    test2();
    return 0;
}
