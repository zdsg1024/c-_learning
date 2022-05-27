#include <iostream>
using namespace std;

/*
   指针和函数的结合
*/

// 值传递
void swap1(int a, int b)
{
    int tmp = a;
    a = b;
    b = tmp;
    cout << "函数内部a和b的值分别为:" << a << " " << b << endl;
}



// 地址传递
void swap2(int * a, int * b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
    cout << "函数内部a和b的值分别为:" << *a << " " << *b << endl;
}

int main()
{
   int a = 10;
   int b = 20;
   cout << "函数执行前函数外部a和b的值分别为:" << a << " " << b << endl;
   swap1(a,b);
   cout << "函数执行后函数外部a和b的值分别为:" << a << " " << b << endl;

   cout << "函数执行前函数外部a和b的值分别为:" << a << " " << b << endl;
   swap2(&a,&b);
   cout << "函数执行后函数外部a和b的值分别为:" << a << " " << b << endl;

   return 0;

}