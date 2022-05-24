#include <iostream>
using namespace std;

/*
    指针所占用的内存空间
    32位操作系统：4字节
    64位操作系统：8字节
*/

int main(){

  // 定义指针
  int a = 10;
  // 指针定义的语法: 数据类型*指针变量名
  int *p;
  // 让指针p记录变量a的地址
  p = &a;
  cout << "指针p占用的内存空间为" << sizeof(p) << endl; // 8
  cout << "double" << sizeof(double *) << endl; // 8
  cout << "char" << sizeof(char *) << endl; // 8



  return 0;
}