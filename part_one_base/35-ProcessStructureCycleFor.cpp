#include <iostream>
using namespace std;
int main()
{
    /*
      程序流程结构: 循环结构
      语法： for (起始表达式a,条件表达式b,末尾循环表达式c){ 循环语句d }
      执行顺序是,先执行a，然后判断b, 然后执行d, 之后执行c.然后判断b, 然后执行d,之后执行c,重复b,d,c,直到b不满足条件终止
      起始表达式a只执行一次;
    */

   for (int i = 0; i < 3; i++)
   {
       cout << i << endl;
   }
   

    return 0;
}