#include <iostream>
using namespace std;

/**
 * @brief 引用
 * 作用: 给变量起别名
 * 语法: 数据类型 &别名 = 原名
 */

int main(){
    
    int a = 10;
    
    int &b = a;

    cout << "a="<< a << endl; // 10
    // b和a访问相同内存
    cout << "b="<< b << endl; // 10

    b = 20;
    cout << "a="<< a << endl; // 20




    return 0;
}