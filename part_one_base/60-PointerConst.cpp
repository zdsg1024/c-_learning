#include <iostream>
using namespace std;

/*
   const修饰指针的三种情况：
   1.const修饰指针   -- 常量指针
   2.const修饰常量   -- 指针常量
   3.const即修饰指针,又修饰常量

*/



int main(){

    // 1. const修饰指针 -- 常量指针
    int a = 10;
    const int * p = &a;
    int b = 10;
    // 指针指向的地址可以修改
    p = &b;
    // 指针指向的地址对应的值不可以修改  -- 期待报错
    // *p = 100;

    // 2. const修饰常量  -- 指针常量
    int * const p1 = &a;
    // 指针指向的地址不可以修改 -- 期待报错
    // p1 = &b;
    // 指针指向地址的值可以修改
    *p1 = 20;

    // 3. const即修饰指针,又修饰常量
    const int * const p2 = &a;
    // 指针指向的地址不可以修改 -- 期待报错
    // p2 = &b;
    // 指针指向地址的值不可以修改  -- 期待报错
    // *p2 = 50;


    // const int c = 10;
    // int d = 20;
    // int * p1 = &d;
    // // 指针指向的
    // p1 = &c;
    // *p1 = 30;


}