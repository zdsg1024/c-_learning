#include <iostream>
using namespace std;

/*
    指针:
    作用: 可以利用指针来间接访问内存地址
      内存的编号一般是从0开始记录的,一般用十六进制表示
      可以利用指针变量保存地址
    定义：数据类型 *指针变量名
*/

int main(){

  // 定义指针
  int a = 10;
  // 指针定义的语法: 数据类型*指针变量名
  int *p;
  // 让指针p记录变量a的地址
  p = &a;
  cout << "a的地址为:" << &a << endl;
  cout << "指针p为:" << p << endl;
  cout << "指针p指向的地址的值为:" << *p << endl;

  // 使用指针  *p 代表指针指向内存中的数据
  *p = 100;
  cout << "指针p指向的地址的值为:" << *p << endl;

  return 0;
}