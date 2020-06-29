//
//  main.cpp
//  08内联函数inline
//
//  Created by fusheng on 2020/6/29.
//  Copyright © 2020 fusheng. All rights reserved.
//

#include <iostream>

/*
 宏函数：
    优点：代码内嵌,没有压栈和出栈的开销。
    缺点：纯代码替换，代码体积变大，没有类型检查容易产生逻辑错误。
 内联函数：
    优点：有类型检查。
    缺点：有压栈和出栈开销
 */

#define SQR(x) ((x) * (x))

inline int sqr(int x) {
    return x * x;
}

using namespace std;

int main(int argc, const char * argv[]) {
    
    cout<<sqr(10)<<endl;
    cout<<SQR(10)<<endl;
    cout<<SQR(10.0)<<endl;
    return 0;
}
