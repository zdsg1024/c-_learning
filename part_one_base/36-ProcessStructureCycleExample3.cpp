#include <iostream>
#include <math.h>
using namespace std;
int main()
{
  /*
    程序流程结构: 循环结构
    练习: 1-100循环,打印出7的倍数,以及个位数或10位数,包含7的数组
  */

  int i = 1;
  while (i < 100)
  {
    int a = i % 10;
    int b = i / 10;
    int c = i % 7;
    if ((i>=7) && (a == 7 || b == 7 || c == 0))
    {
      cout << i << "是与7相关的数字" << endl;
    }
    i++;
  }


  return 0;
}