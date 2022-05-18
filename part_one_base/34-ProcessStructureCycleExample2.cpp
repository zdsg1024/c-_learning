#include <iostream>
#include <math.h>
using namespace std;
int main()
{
  /*
    程序流程结构: 循环结构
    练习: 求出所有的水仙花数
    描述：水仙花数指一个三位数,每个位置的数字的立方之和等于这个三位数本身
    eg: 1^3+5^3+3^3=153
    注意： c++中的次方不能^表示,需要用*法或者数据函数pow()表示
  */

  int i = 100;
  while (i <= 999)
  {
    int a = i % 10;
    int b = (i / 10) % 10;
    int c = i / 100;
    int res = pow(a,3)+pow(b,3)+pow(c,3);
    if (res == i)
    {
      cout << res << "是水仙花数" << endl;
    }
    i++;
  }


  return 0;
}