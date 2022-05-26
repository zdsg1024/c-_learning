#include <iostream>
using namespace std;

/**
 * @brief keywords-new
 * @author zdsg1024
 * 1.c++中利用new关键字在堆中开辟内存
 * 2.堆区开辟的内存可以由程序员手动释放,delete关键字
 * 语法: new 数据类型
 * 利用new创建的数据,会返回该数据对应的类型的指针
 */

// 1.new的基本语法
int *func()
{
    int *p = new int(10);
    return p;
}
void test01()
{
    int *p = func();
    cout << *p << endl;
    cout << *p << endl;
    // 可以手动释放内存
    delete p;
    // delete p; 该操作会将p所指向的内存释放,但是并不会把p置为NULL
    p = NULL;
    // 内存已经释放,并且p也置为NULL,期待报错
    cout << *p << endl;
}

// 2. 利用new在堆区开辟数组
void test02()
{
    // 创建长度为10的数组,在堆区
    int *arr = new int[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i] = i + 100;
    }
    // 循环打印
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    // 释放数组
    delete[] arr;
    arr = NULL;
}

int main()
{
   
    //test01();

    test02();


    return 0;
}