//
//  main.c
//  01类型检查C
//
//  Created by Fu,Sheng on 2018/4/10.
//  Copyright © 2018年 baidu. All rights reserved.
//

#include <stdio.h>

//const 类型检查不严格
void test1(){
    const int a = 10;
    int* pa = &a;   //虽然能够编译通过，但是会有警告。
    *pa = 100;      //编译能通过，但是赋值失效。
    printf("a = %d \n",a);
}

enum weather{
    spr,
    sum,
    aut,
    win
};
void test2(){
    enum weather w1 = spr;
    printf("today weather is %d \n",w1);
    enum weather w2 = 0; //编译能通过
    printf("today weather is %d \n",w2);
}

int main(int argc, const char * argv[]) {
//    test1();
//    test2();
    return 0;
}
