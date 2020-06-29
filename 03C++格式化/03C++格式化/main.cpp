//
//  main.cpp
//  03C++格式化
//
//  Created by Fu,Sheng on 2018/4/16.
//  Copyright © 2018年 baidu. All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;

/*
 setw:设置对齐长度（右对齐）
 setfill:设置对齐长度时的填充，通常于setw一起使用
 setprecision:设置有效位数。
 
 */


/* 1. c++默认只输出6为有效数字,需要注意的是最后一位不一定是四舍五入 */
void test1(){
    //c++
    double a = 1.23456789;
    cout<<a<<endl;
    //c
    printf("%f \n",a);
}

/* 2. 设置对齐方式 */
void test2(){
    //c++
    cout<< setw(5) <<1 <<endl;
    cout<< setw(5) <<12 <<endl;
    cout<< setw(5) <<123 <<endl;
    cout<< setw(5) <<1234 <<endl;
    cout<< setw(5) <<12345 <<endl;
    //c
    printf("%5d \n",1);
    printf("%5d \n",12);
    printf("%5d \n",123);
    printf("%5d \n",1234);
    printf("%5d \n",12345);
}

/* 3. 对齐方式填充空缺 */
void test3(){
    //c++
    cout<<  setfill('x') <<setw(5) << 1 << endl;
    cout<<  setfill('x') <<setw(5) << 12 << endl;
    cout<<  setfill('x') <<setw(5) << 123 << endl;
    cout<<  setfill('x') <<setw(5) << 1234 << endl;
    cout<<  setfill('x') <<setw(5) << 12345 << endl;
    //c  好像不能实现
    printf("%+5d",1);
}

/* 4. 有效位数 */
void test4(){
    //c++
    cout<<  setprecision(3)<<1.2345<<   endl;
    //c
    printf("%.2f \n",1.23456);
}

/* 5. 根究flag设置输出格式 */
void test5(){
    //c++
    cout<< setiosflags(ios::left) << 1 << endl;
    cout<< setiosflags(ios::left) << 12 << endl;
    cout<< setiosflags(ios::left) << 123 << endl;
    cout<< setiosflags(ios::left) << 1234 << endl;
    cout<< setiosflags(ios::left) << 12345 << endl;
}

/* 6. 练习写一个时钟 */
void test6(){
    time_t t;
    time(&t);
    struct tm *ltm = localtime(&t);
    cout<<setw(2)<<setfill('0')<<ltm->tm_hour<<":"
    <<setw(2)<<setprecision('0')<<ltm->tm_min<<":"
    <<setw(2)<<setprecision('0')<<ltm->tm_sec <<endl;
}

int main(int argc, const char * argv[]) {
//    test1();
//    test2();
//    test3();
//    test4();
//    test5();
    test6();
    return 0;
}
