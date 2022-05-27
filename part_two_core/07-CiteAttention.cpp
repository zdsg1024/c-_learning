#include <iostream>
using namespace std;

/**
 * @brief 引用
 * 作用: 给变量起别名
 * 语法: 数据类型 &别名 = 原名
 * 注意事项: 
 *   1. 引用必须要初始化
 *   2. 引用一旦初始化后,就不可以更改指向新的地址
 */

int main(){
    
    int a = 10;
    // 1. 这个引用变量c没有初始化,期待报错
    // int &c;

    int d = 30;
    int &b = a;
    
    // 2.引用变量b已经初始化,不可以指向新的内存地址,期待报错
    // &b = d;

    return 0;
}