//
//  main.cpp
//  11string
//
//  Created by fusheng on 2020/7/6.
//  Copyright © 2020 fusheng. All rights reserved.
//

#include <iostream>

using namespace std;
// 1. 定义和初始化
void test1() {
    // 定义
    string str;
    // 初始化
    str = "abdce";
    cout << "str = " << str << endl; //str = abdce
    // 定义加初始化
    string str1 = "12345";
    cout << "str1 = " << str1 << endl; //str1 = 12345
}

// 2. 类型大小
void test2() {
    cout << sizeof(string) << endl; // 24
    string str = "12345";
    cout << sizeof(str) << endl;// 24
}

// 3. 常用运算符（赋值，加，比较）
void test3() {
    // 赋值
    string str1 = "123456";
    string str2;
    str2 = str1;
    cout << str2 << endl; //123456
    
    // 加法(拼接)
    str2 = "abcde";
    cout << str1 + str2 << endl; //123456abcde
    
    // 比较(同C语言比较)
    if (str1 < str2) {
        cout << "lss is str1" << endl; //lss is str1
    } else {
        cout << "lss is str2" << endl;
    }
}

// 4. 常用函数（下标获取char，长度，转化char*, 查找, 删除， 交换）
void test4() {
    // 下标获取元素
    string str = "12345678";
    char c1 = str[3];
    cout << c1 << endl; // 4
    
    // 长度
    cout << str.size() << endl; // 8
    cout << str.length() << endl; // 8
    
    // 转化为char *
    const char *ch = str.c_str();
    cout << ch << endl; // 12345678
    
    // 查找元素位置
    cout << str.find("56") << endl; // 4; 找到返回下标
    cout << str.find("21") << endl; // 18446744073709551615; 未找到可能返回数值超出长度范围
    
    // 删除元素
    string str2 = str;
    str2.erase(2);
    cout << str2 << endl; // 12；从第三个元素开始，后面全部删除
    str2 = str;
    str2.erase(1, 3);
    cout << str2 << endl; // 15678; 从第2个元素开始删除3个元素
    str2 = str;
    str2.erase();
    cout << str2 << endl; // 输出空格；清空字符串
    
    // 交换
    str2 = str;
    cout << str2 << endl;
    string str3 = "abcdef";
    str2.swap(str3);
    cout << str2 << endl; // abcdef
    cout << str3 << endl; // 12345678
}

// string 数组。相对于C语言使用二级指针操作，string虽然费空间，但是可读性和易用性更好。
void test5() {
    string str[10] = {
        "1",
        "12",
        "123",
        "1234"
    };
    for (int i = 0; i < 10 ; i ++ ) {
        cout << str[i] << endl;
    }
}

int main(int argc, const char * argv[]) {
//    test1();
//    test2();
//    test3();
//    test4();
    test5();
    return 0;
}
