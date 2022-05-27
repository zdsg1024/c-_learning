#include <iostream>
using namespace std;

/**
 * @brief 引用作为函数的返回值
 * 注意：
 *   1. 不要返回局部变量的引用
 *   2. 函数的调用可以作为左值存在
 */


int & test01(){
    int a  = 10; // 存放在栈区,函数执行完自动回收
    // 期待运行有警告
    return a;
}

int & test02(){
    static int a  = 10; // 存放在全局区,程序执行完成后系统自动释放
    // 期待运行有警告
    return a;
}

int main()
{

    // 返回局部变量的引用的结果 -- 结果多次使用,值不相同
    int &ref=test01();
    cout << ref << endl;  // 10   因为数据在内存中
    cout << ref << endl;  // 乱值  内存中数据已经销毁

    int &ref2=test02();
    cout << ref2 << endl; // 10
    cout << ref2 << endl; // 10

    // 函数调用可以作为左边值
    // 相当于将1000给到test02返回的地址的值,🈶️因为ref也指向test02返回的地址,所以ref2的值也是1000
    test02() = 1000;
    
    cout << ref2 << endl; 



   return 0;

}