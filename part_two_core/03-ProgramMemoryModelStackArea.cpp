#include <iostream>
using namespace std;

/*
   c++ 核心编程: 面向对象
   程序的内存模型,在c++中,将内存分为四个区域
   1.代码区:存放函数体的二进制代码,由操作系统进行管理
   2.全局区:存放全局变量和静态变量以及常量
   3.栈区: 由编译器自动分配释放,存放函数的参数值,局部变量等
   4.堆区: 由程序员分配和释放,若程序员不释放,程序结束时由操作系统回收
*/

/*
程序运行之后
栈区：-- 数据由编译器自动分配释放,存放函数的参数值,局部变量等
   1.不要返回局部变量的地址
   // 因为栈区的内容在程序运行后会自动释放,如果需要返回栈区内部的某个地址,是会冲突的,期待报错

*/


int* func(int b){  // 形参也会存放在栈区
    int a = 10;  // 局部变量 存放在栈区,当函数执行完成后自动释放
    // 这里编译器会进行警告 -- 栈区的内存是与局部变量密切相关的
    // warning: address of stack memory associated with local variable 'a' returned [-Wreturn-stack-address]
    // return &a;
    return 0;
}

int main()
{

   int * p = func(10);

   return 0;
}